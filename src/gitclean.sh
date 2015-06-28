find ./ -name "*.a" | xargs rm -f 
find ./ -name "*.o" | xargs rm -f 
rm -f bitcoin-cli bitcoind bitcoin-tx
rm -f qt/bitcoin-qt
rm -f test/test_bitcoin
rm -f qt/test/test_bitcoin-qt

