BINDIR=`python -c "import os;print os.path.abspath('.')"`

echo "installing index.html..."
rm -rf ~/index.html
ln -s $BINDIR/index.html ~/index.html

echo "installing .shrc"
rm -rf $HOME/.shrc
ln -s $BINDIR/.shrc $HOME/.shrc

echo "installing .oh-my-zsh"
rm -rf $HOME/.oh-my-zsh
ln -s $BINDIR/.oh-my-zsh $HOME/.oh-my-zsh

echo "installing .zshrc"
rm -rf $HOME/.zshrc
ln -s $BINDIR/.zshrc $HOME/.zshrc

TARGETS="cxxindent vpn-umeng-dp ppp rhs golang einstall uinstall time-machine apt-update dp0-ssh-proxy ihosts"

INSTALLDIR=$HOME/utils/bin
if [ ! -d $INSTALLDIR ]
then
    mkdir -p $INSTALLDIR
fi
for target in $TARGETS
do
  echo "installing $target..."
  rm -rf $INSTALLDIR/$target
  ln -s $BINDIR/$target $INSTALLDIR/$target
done

TARGETS=".emacs .emacs.d .screenrc .tmux.conf"
for target in $TARGETS
do
  echo "installing $target..."
  rm -rf $HOME/$target
  ln -s $BINDIR/$target $HOME/$target
done

####################

echo "installing id_rsa.pub..."
rm -rf $HOME/.ssh/id_rsa.pub
ln -s $HOME/.private/keys/id_rsa.pub $HOME/.ssh/id_rsa.pub
chmod 0600 $HOME/.ssh/id_rsa.pub

echo "installing id_rsa..."
rm -rf $HOME/.ssh/id_rsa
ln -s $HOME/.private/keys/id_rsa $HOME/.ssh/id_rsa
chmod 0600 $HOME/.ssh/id_rsa

echo "installing github.pub..."
rm -rf $HOME/.ssh/github.pub
ln -s $HOME/.private/keys/github.pub $HOME/.ssh/github.pub
chmod 0600 $HOME/.ssh/github.pub

echo "installing github..."
rm -rf $HOME/.ssh/github
ln -s $HOME/.private/keys/github $HOME/.ssh/github
chmod 0600 $HOME/.ssh/github

echo "installing ssh-config..."
rm -rf $HOME/.ssh/config
ln -s $HOME/.private/files/ssh-config $HOME/.ssh/config

echo "installing ivy2-credentials..."
mkdir -p $HOME/.ivy2
rm -rf $HOME/.ivy2/.credentials
ln -s $HOME/.private/files/ivy2-credentials $HOME/.ivy2/.credentials

echo "installing mvn-settings.xml..."
mkdir -p $HOME/.m2
rm -rf $HOME/.m2/settings.xml
ln -s $HOME/.private/files/mvn-settings.xml $HOME/.m2/settings.xml

echo "installing build.sbt..."
mkdir -p $HOME/.sbt/plugins
rm -rf $HOME/.sbt/plugins/build.sbt
rm -rf $HOME/.sbt/build.sbt
ln -s $HOME/.private/files/plugins.sbt $HOME/.sbt/plugins/build.sbt
ln -s $HOME/.private/files/build.sbt $HOME/.sbt/build.sbt
