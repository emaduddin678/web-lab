**✅ Problem No:** 1  

**Problem Name:** Design a simple webpage using only HTML tags for Computer Science and Engineering Department of your institute or college where &lt;head&gt;, &lt;title&gt;, &lt;body&gt; and divisional tags like &lt;div&gt;, &lt;span&gt;, &lt;table&gt; should be used as needed. (Using HTML5 is recommended).

**Source Code:**  

**Filename: index.html**
```html
<!DOCTYPE html>
<html>
<head>
    <title>Computer Science and Engineering Department</title>
</head>
<body>
    <h1>Welcome to the CSE Department</h1>
    <p>The CSE department focuses on software, hardware, and networking education and research.</p>

    <h2>Programs Offered</h2>
    <table border="1">
        <tr>
            <th>Program</th>
            <th>Duration</th>
        </tr>
        <tr>
            <td>BSc in CSE</td>
            <td>4 Years</td>
        </tr>
        <tr>
            <td>MSc in CSE</td>
            <td>2 Years</td>
        </tr>
    </table>

    <div>
        <p>Contact us for more details at: <span>info@cse-dept.edu</span></p>
    </div>
</body>
</html>
```

**✅ Problem No:** 2  

**Problem Name:** Using text links design a simple website to navigate between different pages (minimum two pages and one page must contain an image link and another page contain 2x3 table).

**Source Code:**  

**Filename: index.html**
```html
<!DOCTYPE html>
<html>
<head><title>Home</title></head>
<body>
    <h1>Welcome to My Website</h1>
    <a href="image.html">Go to Image Page</a><br>
    <a href="table.html">Go to Table Page</a>
</body>
</html>
```

**Filename: iamge.html**
```html
<!DOCTYPE html>
<html>
<head><title>Image Page</title></head>
<body>
    <h1>This is the Image Page</h1>
    <img src="image.jpg" alt="Sample Image" width="300">
    <br><a href="index.html">Back to Home</a>
</body>
</html>
```

**Filename: table.html**
```html
<!DOCTYPE html>
<html>
<head><title>Table Page</title></head>
<body>
    <h1>This is the Table Page</h1>
    <table border="1">
        <tr><th>Name</th><th>Department</th></tr>
        <tr><td>Alice</td><td>CSE</td></tr>
        <tr><td>Bob</td><td>EEE</td></tr>
    </table>
    <br><a href="index.html">Back to Home</a>
</body>
</html>
```

**✅ Problem No:** 3  

**Problem Name:** Design a simple website using CSS containing formatted text, forms, tables and link styles. (Must use three ways of inserting CSS external, internal and inline style).

**Source Code:**  

**Filename: index.html**
```html
<!DOCTYPE html>
<html>
<head>
    <title>CSS Example</title>
    <link rel="stylesheet" href="style.css">
    <style>
        h1 { color: darkgreen; }
    </style>
</head>
<body>
    <h1>Welcome to the CSS Styled Page</h1>
    <p style="color: blue;">This is an inline styled paragraph.</p>
    <form>
        <label>Name: </label><input type="text"><br>
        <label>Email: </label><input type="email"><br>
    </form>
</body>
</html>
```
**Filename: style.css**
```css
body {
    background-color: #f5f5f5;
}

form {
    border: 1px solid gray;
    padding: 10px;
    width: 200px;
}
```

**✅ Problem No:** 4  

**Problem Name:** Using CSS menu, design a website to navigate between different pages. (Minimum three pages and each page must contain heading, paragraph, text formatting tags and mouse over links to back homepage).

**Source Code:**  

**Filename: index.html**
```html
<!DOCTYPE html>
<html>
<head>
    <title>Home</title>
    <link rel="stylesheet" href="menu.css">
</head>
<body>
    <ul class="nav">
        <li><a href="index.html">Home</a></li>
        <li><a href="page1.html">Page 1</a></li>
        <li><a href="page2.html">Page 2</a></li>
    </ul>

    <h1>Home Page</h1>
    <p>This is the <b>home page</b> of the website.</p>
</body>
</html>
```

**Filename: page1.html**
```html
<!DOCTYPE html>
<html>
<head>
    <title>Page 1</title>
    <link rel="stylesheet" href="menu.css">
</head>
<body>
    <ul class="nav">
        <li><a href="index.html">Home</a></li>
        <li><a href="page1.html">Page 1</a></li>
        <li><a href="page2.html">Page 2</a></li>
    </ul>

    <h1>Page 1</h1>
    <p>This is <i>Page 1</i> with some sample content.</p>
    <a href="index.html" class="back-link">Back to Home</a>
</body>
</html>
```

**Filename: page2.html**
```html
<!DOCTYPE html>
<html>
<head>
    <title>Page 2</title>
    <link rel="stylesheet" href="menu.css">
</head>
<body>
    <ul class="nav">
        <li><a href="index.html">Home</a></li>
        <li><a href="page1.html">Page 1</a></li>
        <li><a href="page2.html">Page 2</a></li>
    </ul>

    <h1>Page 2</h1>
    <p>This is <u>Page 2</u> showing more content.</p>
    <a href="index.html" class="back-link">Back to Home</a>
</body>
</html>
```

**Filename: menu.css**
```css
.nav {
    list-style: none;
    background-color: #333;
    padding: 0;
    margin: 0;
}

.nav li {
    display: inline;
}

.nav li a {
    display: inline-block;
    color: white;
    padding: 10px;
    text-decoration: none;
}

.nav li a:hover {
    background-color: #111;
}

.back-link {
    display: inline-block;
    margin-top: 20px;
    color: blue;
    text-decoration: none;
}

.back-link:hover {
    text-decoration: underline;
}
```

**✅ Problem No:** 5  

**Problem Name:** Design a form that contains "Text Fields", "Text Area", "Check boxes", "Multiple Checkboxes", "Radio Buttons", "List Boxes", "Password Fields", "Submit button", "Reset button" and store the value of this form into MySQL database and show the stored information into another page using PHP program.

**Source Code:**  

**Filename: index.html**
```html
<!DOCTYPE html>
<html>
<head>
    <title>User Form</title>
</head>
<body>
    <h2>User Information Form</h2>
    <form action="submit.php" method="POST">
        Name: <input type="text" name="name" required><br><br>
        Email: <input type="email" name="email" required><br><br>

        Gender:
        <input type="radio" name="gender" value="Male" required> Male
        <input type="radio" name="gender" value="Female"> Female<br><br>

        Hobbies:
        <input type="checkbox" name="hobbies[]" value="Reading"> Reading
        <input type="checkbox" name="hobbies[]" value="Coding"> Coding
        <input type="checkbox" name="hobbies[]" value="Music"> Music<br><br>

        Country:
        <select name="country">
            <option value="Bangladesh">Bangladesh</option>
            <option value="India">India</option>
            <option value="USA">USA</option>
        </select><br><br>

        Message:<br>
        <textarea name="message" rows="4" cols="30"></textarea><br><br>

        Password: <input type="password" name="password" required><br><br>

        <input type="submit" value="Submit">
        <input type="reset" value="Reset">
    </form>
</body>
</html>
```

**Filename: submit.php**
```php
<?php
$conn = mysqli_connect("localhost", "root", "", "usersdb");

if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

$name = $_POST['name'];
$email = $_POST['email'];
$gender = $_POST['gender'];
$hobbies = isset($_POST['hobbies']) ? implode(", ", $_POST['hobbies']) : "";
$country = $_POST['country'];
$message = $_POST['message'];
$password = $_POST['password'];

$sql = "INSERT INTO users (name, email, gender, hobbies, country, message, password)
        VALUES ('$name', '$email', '$gender', '$hobbies', '$country', '$message', '$password')";

if (mysqli_query($conn, $sql)) {
    $last_id = mysqli_insert_id($conn);
    echo "<h3>Form submitted successfully!</h3>";
    echo "<a href='view.php?id=$last_id'>View Submitted Data</a>";
} else {
    echo "Error: " . mysqli_error($conn);
}

mysqli_close($conn);
?>
```

**Filename: view.php**
```php
<?php
$conn = mysqli_connect("localhost", "root", "", "usersdb");

$id = $_GET['id'];

$result = mysqli_query($conn, "SELECT * FROM users WHERE id = $id");

$row = mysqli_fetch_assoc($result);

echo "<h2>User Data</h2>";
echo "Name: " . $row['name'] . "<br>";
echo "Email: " . $row['email'] . "<br>";
echo "Gender: " . $row['gender'] . "<br>";
echo "Hobbies: " . $row['hobbies'] . "<br>";
echo "Message: " . $row['message'] . "<br>";
echo "Password: " . $row['password'] . "<br>";
?>
```

**✅ Problem No:** 6  

**Problem Name:** Design a webpage that collects student information and subject marks and stores the information and marks to MySQL database. Show the results in grading (GPA) system to another page using PHP program.

**Source Code:**  

**Filename: index.html**
```html
<!DOCTYPE html>
<html>
<head>
    <title>Student Marks Form</title>
</head>
<body>
    <h2>Enter Student Marks</h2>
    <form action="submit.php" method="POST">
        Name: <input type="text" name="name"><br><br>
        Bangla: <input type="number" name="bangla"><br><br>
        English: <input type="number" name="english"><br><br>
        Math: <input type="number" name="math"><br><br>
        <input type="submit" value="Submit">
    </form>
</body>
</html>
```

**Filename: submit.php**
```php
<?php
$conn = mysqli_connect("localhost", "root", "", "resultdb");

$name = $_POST['name'];
$bangla = $_POST['bangla'];
$english = $_POST['english'];
$math = $_POST['math'];

$sql = "INSERT INTO students (name, bangla, english, math)
        VALUES ('$name', '$bangla', '$english', '$math')";

if (mysqli_query($conn, $sql)) {
    $id = mysqli_insert_id($conn);
    echo "Data saved successfully.<br>";
    echo "<a href='view.php?id=$id'>Click here to view result</a>";
} else {
    echo "Error: " . mysqli_error($conn);
}
?>
```

**Filename: view.php**
```php
<?php
$conn = mysqli_connect("localhost", "root", "", "resultdb");

$id = $_GET['id'];

$result = mysqli_query($conn, "SELECT * FROM students WHERE id = $id");

if ($row = mysqli_fetch_assoc($result)) {
    $bangla = $row['bangla'];
    $english = $row['english'];
    $math = $row['math'];

    $avg = ($bangla + $english + $math) / 3;

    if ($avg >= 80) $gpa = 4.0;
    elseif ($avg >= 70) $gpa = 3.5;
    elseif ($avg >= 60) $gpa = 3.0;
    elseif ($avg >= 50) $gpa = 2.5;
    else $gpa = 2.0;

    echo "<h2>Student GPA Result</h2>";
    echo "Name: " . $row['name'] . "<br>";
    echo "Average Marks: " . round($avg, 2) . "<br>";
    echo "GPA: $gpa<br>";
} else {
    echo "Result not found.";
}
?>
```

**✅ Problem No:** 7  

**Problem Name:** Design a page where user can input his/her personal information like name, address, email, gender, mobile number, etc. and perform common input validation using JavaScript like valid email, mobile number should be 11 digits, mandatory field check etc.

**Source Code:**  

**Filename: index.html**
```html
<!DOCTYPE html>
<html>
<head>
    <title>Personal Info Form</title>
    <script>
    function validateForm() {
        let name = document.forms["infoForm"]["name"].value;
        let address = document.forms["infoForm"]["address"].value;
        let email = document.forms["infoForm"]["email"].value;
        let gender = document.forms["infoForm"]["gender"].value;
        let mobile = document.forms["infoForm"]["mobile"].value;


        if (name == "" || address == "" || email == "" || gender == "" || mobile == "") {
            alert("All fields are mandatory.");
            return false;
        }

        let emailPattern = /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/g;
        if (!emailPattern.test(email)) {
            alert("Please enter a valid email address.");
            return false;
        }

        let mobilePattern = /^[0-9]{11}$/;
        if (!mobilePattern.test(mobile)) {
            alert("Mobile number must be exactly 11 digits.");
            return false;
        }

        return true;
    }
    </script>
</head>
<body>

<h2>Personal Information Form</h2>
<form name="infoForm" onsubmit="return validateForm()">
    Name: <input type="text" name="name"><br><br>
    Address: <input type="text" name="address"><br><br>
    Email: <input type="email" name="email"><br><br>
    Gender: 
    <select name="gender">
        <option value="">--Select--</option>
        <option value="Male">Male</option>
        <option value="Female">Female</option>
    </select><br><br>
    Mobile: <input type="text" name="mobile"><br><br>

    <input type="submit" value="Submit">
</form>
</body>
</html>
```