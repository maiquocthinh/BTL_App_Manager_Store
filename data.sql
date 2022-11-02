


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
SET NAMES utf8mb4;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


# Dump of table tb_bills
# ------------------------------------------------------------

DROP TABLE IF EXISTS `tb_bills`;

CREATE TABLE `tb_bills` (
  `id` int NOT NULL AUTO_INCREMENT,
  `product_ids` tinytext CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NOT NULL,
  `total_money` int NOT NULL,
  `employee_id` int NOT NULL,
  `date` datetime NOT NULL,
  `discount` int NOT NULL,
  `quantities` tinytext CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NOT NULL,
  `customer_id` int NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;





# Dump of table tb_customers
# ------------------------------------------------------------

DROP TABLE IF EXISTS `tb_customers`;

CREATE TABLE `tb_customers` (
  `id` int NOT NULL AUTO_INCREMENT,
  `fullname` tinytext CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NOT NULL,
  `sex` tinyint(1) NOT NULL,
  `address` text CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci,
  `phone` tinytext CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci,
  `points` int DEFAULT '0',
  `isDelete` tinyint(1) DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;





# Dump of table tb_employees
# ------------------------------------------------------------

DROP TABLE IF EXISTS `tb_employees`;

CREATE TABLE `tb_employees` (
  `id` int NOT NULL AUTO_INCREMENT,
  `username` tinytext CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci,
  `password` tinytext CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci,
  `position` smallint NOT NULL,
  `fullname` tinytext CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NOT NULL,
  `sex` tinyint DEFAULT NULL,
  `address` text CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NOT NULL,
  `phone` tinytext CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci,
  `isDelete` tinyint(1) DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

LOCK TABLES `tb_employees` WRITE;
/*!40000 ALTER TABLE `tb_employees` DISABLE KEYS */;

INSERT INTO `tb_employees` (`address`, `fullname`, `id`, `isDelete`, `password`, `phone`, `position`, `sex`, `username`) VALUES
	('TP. HCM', 'Nguyen Van A', 1, 0, '12345', '0863487183', 0, 0, 'manager');

/*!40000 ALTER TABLE `tb_employees` ENABLE KEYS */;
UNLOCK TABLES;



# Dump of table tb_imports
# ------------------------------------------------------------

DROP TABLE IF EXISTS `tb_imports`;

CREATE TABLE `tb_imports` (
  `id` int NOT NULL AUTO_INCREMENT,
  `product_ids` tinytext CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NOT NULL,
  `date` datetime NOT NULL,
  `employee_id` int NOT NULL,
  `quantities` tinytext CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NOT NULL,
  `total_money` int NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;





# Dump of table tb_prods_categories
# ------------------------------------------------------------

DROP TABLE IF EXISTS `tb_prods_categories`;

CREATE TABLE `tb_prods_categories` (
  `id` int NOT NULL AUTO_INCREMENT,
  `title` tinytext CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NOT NULL,
  `isDelete` tinyint DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;





# Dump of table tb_products
# ------------------------------------------------------------

DROP TABLE IF EXISTS `tb_products`;

CREATE TABLE `tb_products` (
  `id` int NOT NULL AUTO_INCREMENT,
  `name` text CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NOT NULL,
  `description` mediumtext CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci,
  `image` text CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NOT NULL,
  `quantity` int NOT NULL,
  `import_price` int NOT NULL,
  `sell_price` int NOT NULL,
  `unit` tinytext CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NOT NULL,
  `category_id` smallint NOT NULL,
  `position` tinytext CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NOT NULL,
  `isDelete` tinyint DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;





/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;
/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;


