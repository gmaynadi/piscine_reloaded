ifconfig -a | grep "ether" | sed "s/\(.*\) /\1/" | sed "s/.* //g"
