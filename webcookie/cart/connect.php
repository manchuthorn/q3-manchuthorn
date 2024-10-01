<?php
try {
	$pdo = new PDO("mysql:host=localhost;dbname=sec1_14; charset=utf8", "Wstd14", "hy3fBxRi");
} catch (PDOException $e) {
	echo "เกิดข้อผิดพลาด : ".$e->getMessage();
}
?>