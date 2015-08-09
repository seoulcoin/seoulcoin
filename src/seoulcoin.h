// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_SEOULCOIN_H
#define BITCOIN_SEOULCOIN_H

//#include "chainparamsbase.h"
//#include "checkpoints.h"
//#include "primitives/block.h"
//#include "protocol.h"
//#include "uint256.h"
//
//#include <vector>

/*
 * chainparams.cpp config
 */
#define HASH_GENESIS_BLOCK		"0x000000cabae6167f60617e0987865afcb500b8d6e6265ecf4e11c8f95d5c6074"
#define GENESIS_NBITS 			0x1e00ffff
#define GENESIS_NTIME 			1436371815
#define GENESIS_NNONCE 			20110306
#define TARGET_TIME_SPAN 		(2 * 24 * 60 * 60)  //2days  <== 14 * 24 * 60 * 60; //! two weeks
#define TARGET_SPACE 			(1 * 60)  //10 * 60
#define DEFAULT_PORT 			47773 //8333

#define MAINNET_RPC_PORT		47772 //bitcoin: 8332
#define MAINNET_P2P_PORT		47773 //bitcoin: 8333
#define TESTNET_RPC_PORT		37772 //bitcoin: 18332
#define TESTNET_P2P_PORT		37773 //bitcoin: 18333
#define REGTEST_P2P_PORT		37774 //bitcoin: 18444
#define UNITTEST_P2P_PORT		37775 //bitcoin: 18445


#define PSZ_TIME_STAMP 			"The Times 9/Jul/2015 Seoulcoin held a meeting with p2pf in Seoul Bitcoin Center."
//COIN = 100000000 satoshi; 1 satoshi = 1 won
//total money = 10000 COIN
//premine by 100 block * 100 COIN
#define COINBASE_OUTPUT			(10000000000 * COIN)//10,000,000,000  //50 * COIN;

#define HASH_MERKLE_ROOT		"0x158432c68bfa12548aa3882d87c01cc9d3c3db5ea565de6f95693fe4aa7e079e"
#define SEED_DOMAIN_NAME		"seoulcoin.info"
#define SEOULCOIN_DOMAIN_NAME_1 "test1.seoulcoin.info"
#define SEOULCOIN_DOMAIN_NAME_2 "test2.seoulcoin.info"
#define SEOULCOIN_DOMAIN_NAME_3 "test3.seoulcoin.info"

/*
 * amount.h config
 */
#define COIN_VALUE 				100000000
#define CENT_VALUE				1000000
#define MAX_MONEY_VALUE			(1000000*1000000 * COIN)

/*
 * main.cpp
 */
#define BLOCK_VALUE				(100000000*100)

//MERKELROOT
//PORT
//etc...

#endif // BITCOIN_CHAINPARAMS_H
