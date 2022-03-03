ifconfig | grep 'ether ' | tr -d '\t' | cut -c 7- | sed 's/ $//'
