<!doctype html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <title>CS Shop</title>
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="mobile-web-app-capable" content="yes">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <link href="mcss.css" rel="stylesheet" type="text/css" />
    <script src="mpage.js"></script>
</head>

<body>

    <header>
        <div class="logo">
            <img src="cslogo.jpg" width="200" alt="Site Logo">
        </div>
        <div class="search">
            <form>
                <input type="search" placeholder="Search the site...">
                <button type="submit">Submit</button>
            </form>
        </div>
    </header>

    <div class="mobile_bar">
        <a href="#"><img src="responsive-demo-home.gif" alt="Home"></a>
        <a href="#" onClick='toggle_visibility("menu"); return false;'><img src="responsive-demo-menu.gif"
                alt="Menu"></a>
    </div>

    <main>
        <article>
            <form action="insertproduct.php" method="post" enctype="multipart/form-data">
                <label for="pimage">ภาพสินค้า :</label>
                <input type="file" id="pimage" name="pimage" accept="image/jpg,image/jpeg,image/png" required><br><br>
            
                <label for="pid">รหัสสินค้า :</label>
                <input type="text" id="pid" name="pid" placeholder="กรอกรหัสสินค้า" title="รหัสสินค้า" required><br>
            
                <label for="pname">ชื่อสินค้า :</label>
                <input type="text" id="pname" name="pname" placeholder="กรอกชื่อสินค้า" title="ชื่อสินค้า" required><br>
            
                <label for="pdetail">รายละเอียดสินค้า :</label><br>
                <textarea id="pdetail" name="pdetail" rows="3" cols="40" placeholder="กรอกรายละเอียดสินค้า" title="รายละเอียดสินค้า" required></textarea><br>
            
                <label for="price">ราคา :</label>
                <input type="number" id="price" name="price" placeholder="กรอกราคา" title="ราคา" required><br>
            
                <input type="submit" value="เพิ่มสินค้า">
            </form>            
        </article>
        <nav id="menu">
            <h2>Navigation</h2>
            <ul class="menu">
            <li class="dead"><a>Home</a></li>
                <li><a href="./mpage.php">Home</a></li>
                <li><a href="./photoproduct.php">All Products</a></li>
                <li><a href="./tableconnect.php">Table of All Products</a></li>
                <li><a href="./formproduct.html">Insert Product</a></li>
                
            </ul>
        </nav>
        <aside>
            <h2>Member</h2>
        <ul class="menu">
          <li><a href="./formmember.html">InsertMember</a></li>
          <li><a href="./photomember.php">All Member</a></li>
        </ul>
        </aside>
    </main>
    <footer>
        <a href="#">Sitemap</a>
        <a href="#">Contact</a>
        <a href="#">Privacy</a>
    </footer>
</body>

</html>