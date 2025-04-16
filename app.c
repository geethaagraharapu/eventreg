#app.css
body {
  font-family: sans-serif;
  background-color: #f4f4f4;
  margin: 0;
  padding: 0;
}

.App {
  text-align: center;
  padding-top: 50px;
}

.form-container {
  background: white;
  max-width: 400px;
  margin: auto;
  padding: 20px;
  border-radius: 10px;
  box-shadow: 0 2px 10px rgba(0, 0, 0, 0.1);
}

form {
  display: flex;
  flex-direction: column;
}

input {
  margin-bottom: 15px;
  padding: 10px;
  font-size: 16px;
}

button {
  background-color: #007bff;
  color: white;
  padding: 10px;
  font-size: 16px;
  border: none;
  border-radius: 5px;
  cursor: pointer;
}
#RegistrationForm/src
import React, { useState } from 'react';

function RegistrationForm() {
  const [formData, setFormData] = useState({
    name: '',
    email: '',
    phone: ''
  });

  const [submitted, setSubmitted] = useState(false);

  const handleChange = (e) => {
    setFormData({
      ...formData,
      [e.target.name]: e.target.value
    });
  };

  const handleSubmit = (e) => {
    e.preventDefault();
    if (formData.name && formData.email && formData.phone) {
      setSubmitted(true);
      console.log('Form Data:', formData);
    }
  };

  return (
    <div className="form-container">
      <h2>Event Registration</h2>
      {!submitted ? (
        <form onSubmit={handleSubmit}>
          <label>Name:</label>
          <input
            type="text"
            name="name"
            onChange={handleChange}
            value={formData.name}
            required
          />

          <label>Email:</label>
          <input
            type="email"
            name="email"
            onChange={handleChange}
            value={formData.email}
            required
          />

          <label>Phone:</label>
          <input
            type="tel"
            name="phone"
            onChange={handleChange}
            value={formData.phone}
            required
          />

          <button type="submit">Register</button>
        </form>
      ) : (
        <p>Thanks for registering, {formData.name}!</p>
      )}
    </div>
  );
}

export default RegistrationForm

#App.js
import React from 'react';
import './App.css';
import RegistrationForm from './RegistrationForm';

function App() {
  return (
    <div className="App">
      <RegistrationForm />
    </div>
  );
}

export default App;



