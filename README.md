# STI2D SIN START

Bienvenue dans ce repo git contenant l'essentiel pour pouvoir commencer votre projet de terminale.

## Sommaire

+ **[Pré-requis](#pr%C3%A9-requis-revenir-au-sommaire)**
+ **[Contenu](contenu-revenir-au-sommaire)**
+ **[Scripts PHP](scripts-php-revenir-au-sommaire)**
+ **[Programmes arduino](programmes-arduino-revenir-au-sommaire)**
+ **[Scripts SQL](scripts-sql-revenir-au-sommaire)**

## Pré-requis [[revenir au sommaire]](#sommaire)

Pour que ces ressources fonctionnent il faut que vous ayez au préalable un environnement de travail adapté.

#### Si vous êtes sur windows

Vous devez utiliser un logiciel appelé [WAMP Server](http://www.wampserver.com/) qui vous permettra d'utiliser toutes les ressources de ce repo facilement. Cela peut être utile pour travailler de votre côter sur otre machine personnelle.

EDIT : Depuis la mise à jour d'Avril 2019 de windows 10, il se peut que WAMP Server ai des problèmes de fonctionnement, il existe une alternative nommée [UWamp](https://www.uwamp.com/fr/) qui a l'avantage de pouvoir être utilisé de manière portable (mais assez instable).

#### Si vous êtes sur MacOS

Vous devez installer sur votre appareil l'environnement [XAMPP](https://www.apachefriends.org/fr/index.html) qui, comme WAMP, contient tout ce qui est necessaire pour que ces ressources fonctionnent.

#### Si vous êtes sur une distribution linux

Bienvenue dans un monde où tout (ou presque ;D) est à installer manuellement avec des lignes de commandes.

Dans un premier temps, vous devez installer les paquets d'Apache (qui va gérer vos pages HTML) :

``` apt-get install apache2 apache2-doc
```

Puis, vous devrez installer PHP 7 (PHP 5 est assez obsolète donc je ne vous recommande pas son utilisation) :

```
apt-get install ca-certificates apt-transport-https 
wget -q https://packages.sury.org/php/apt.gpg -O- | sudo apt-key add -
echo "deb https://packages.sury.org/php/ jessie main" | tee /etc/apt/sources.list.d/php.list
apt-get install php7.2
```





## Contenu [[revenir au sommaire]](#sommaire)



### Scripts PHP [[revenir au sommaire]](#sommaire)

Dans le dossier php, vous trouverez quelques scripts qui vous permettrons de lier votre base de données MySQL avec votre serveur web.

### Programmes Arduino [[revenir au sommaire]](#sommaire)



### Scripts SQL [[revenir au sommaire]](#sommaire)



## License [[revenir au sommaire]](#sommaire)

[![logo](https://licensebuttons.net/l/by/4.0/88x31.png)](https://creativecommons.org/licenses/by/4.0/) Ce repo est disponible sous les termes des [Creative Commons Attribution 4.0 International License](https://creativecommons.org/licenses/by/4.0/) (voir [LICENSE.md](https://github.com/JunkJumper/STI2D_SIN_START/blob/master/LICENSE.md)).
