# STI2D SIN START

Bienvenue dans ce repo git contenant l'essentiel pour pouvoir commencer votre projet de terminale.

## Sommaire

+ **[Pré-requis](#pr%C3%A9-requis-revenir-au-sommaire)**
+ **[Contenu](#contenu-revenir-au-sommaire)**
+ **[Scripts PHP](#scripts-php)**
+ **[Programmes arduino](#programmes-arduino)**
+ **[Scripts SQL](#scripts-sql)**
+ **[License](#license-revenir-au-sommaire)**

## Pré-requis [[revenir au sommaire]](#sommaire)

Pour que ces ressources fonctionnent il faut que vous ayez au préalable un environnement de travail adapté.

### Si vous êtes sur windows

Vous devez utiliser un logiciel appelé [WAMP Server](http://www.wampserver.com/) qui vous permettra d'utiliser toutes les ressources de ce repo facilement. Cela peut être utile pour travailler de votre côter sur otre machine personnelle.

EDIT : Depuis la mise à jour d'Avril 2019 de windows 10, il se peut que WAMP Server ai des problèmes de fonctionnement, il existe une alternative nommée [UWamp](https://www.uwamp.com/fr/) qui a l'avantage de pouvoir être utilisé de manière portable (mais assez instable).

### Si vous êtes sur MacOS

Vous devez installer sur votre appareil l'environnement [XAMPP](https://www.apachefriends.org/fr/index.html) qui, comme WAMP, contient tout ce qui est necessaire pour que ces ressources fonctionnent.

### Si vous êtes sur une distribution Linux

Bienvenue dans un monde où tout (ou presque ;D) est à installer manuellement avec des lignes de commandes.
Dans un premier temps, vous devez installer les paquets d'Apache (qui va gérer vos pages HTML) :

```
apt-get install apache2 apache2-doc
```

Puis, vous devrez installer PHP 7 (PHP 5 est assez obsolète donc je ne vous recommande pas son utilisation) :

```
apt-get install ca-certificates apt-transport-https 
wget -q https://packages.sury.org/php/apt.gpg -O- | sudo apt-key add -
echo "deb https://packages.sury.org/php/ jessie main" | tee /etc/apt/sources.list.d/php.list
apt-get install php7.2
```

Enfin, PhPMyAdmin devra être installer pour finaliser l'instalation de votre environement :

```
apt-get install phpmyadmin
```

Cette instalation étant un peu complexe, voici quelques liens utiles selon votre distribution :

+ [Debian](https://www.lecoindunet.com/installer-serveur-web-lamp-sous-debian-8-jessie-1519)
+ [Ubuntu](https://doc.ubuntu-fr.org/lamp)
+ [Arch Linux](https://wiki.archlinux.fr/LAMP)
+ [Raspbian](https://raspberry-pi.fr/installer-serveur-web-raspberry-lamp/)

Vous voilà enfin prêts pour votre projet ! :D

## Contenu [[revenir au sommaire]](#sommaire)
### Scripts PHP

Dans le dossier php, vous trouverez quelques scripts qui vous permettrons de lier votre base de données MySQL avec votre serveur web. Par exemple lire & écrire dans une base de données, envoyer à un client ou serveur une requête web.

1. **database.php** : le fichier de configuration de votre base de données
2. **getTable.php** : un fichier qui montre comment récupérer des valeurs d'une base de données et les afficher dans une page HTML
3. **updateTable.php** : un fichier qui montre que l'on peut modifier depuis un script php le contenu d'une base de données

### Programmes Arduino

Dans le dossier arduino, vous trouverez quelques programmes qui vous permettrons d'envoyer et de recevoir des informations avec votre carte arduino. Vous trouverez égalements quelques astuces pour construire vos programmes.

1. **connectionServer.ino** : un fichier qui montre que l'on peut écrire depuis une programme arduino dans une base de données
2. **getInfos.ino** : un fichier qui montre que l'on peut recevoir des informations depuis une page web et les traiter sur la carte arduino

### Scripts SQL

Dans le dossier SQL, vous trouverez quelques scripts simple pour préparer vos requêtes avec PHP

1. **infos.sql** : le fichier de creation de la base de données pour montrer le fonctionnement de ce repo

## License [[revenir au sommaire]](#sommaire)

[![logo](https://licensebuttons.net/l/by/4.0/88x31.png)](https://creativecommons.org/licenses/by/4.0/) Ce repo est disponible sous les termes des [Creative Commons Attribution 4.0 International License](https://creativecommons.org/licenses/by/4.0/) (voir [LICENSE.md](https://github.com/JunkJumper/STI2D_SIN_START/blob/master/LICENSE.md)).

Pour toutes questions, vous pouvez me contacter via discord : JunkJumper#3773
