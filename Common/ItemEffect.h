//#define EF_NONE     			  0	// * EFFECT Type? 0 ?? ???? ??.  ITEM?? Score[0]? ?? ??? ??.
// Score ??
#define EF_LEVEL     			  1	// ?? * Score[1] - Score[15] Bonus Score?? ??? ?? ???.
#define EF_DAMAGE                 2 // ??
#define EF_AC       			  3	// ??
#define EF_HP        			  4	// ??  HP,MP,????,????,?? MAX??
#define EF_MP       			  5	// ??
#define EF_EXP      			  6	// ??
#define EF_STR      		      7	// ?
#define EF_INT      		      8	// ?? 
#define EF_DEX       		      9	// ??
#define EF_CON      		     10	// ??
#define EF_SPECIAL1    		     11	// ??
#define EF_SPECIAL2    			 12	// ?1
#define EF_SPECIAL3    			 13	// ?2
#define EF_SPECIAL4    			 14	// ?3
// Score ?.
#define EF_SCORE14     			 15	// 
#define EF_SCORE15     			 16	// 
////////////////      REQUIREMENT        //////////////////////////////////////////
#define EF_POS                   17  // ?? ??? ?? ?? bit?         - ??? NOWHERE (0?? ? EQUIP 0)
#define EF_CLASS                 18  // ?? ??? ?? (??)??? bit? - ??? YES
#define EF_R1SIDC                19  // ?? 1?? ?? ??? ??? ?? STR INT DEC CON         - ??? 0
#define EF_R2SIDC                20  // ?? 2??          ? ??? ?? STR INT DEC CON         - ??? ??
////////////////   BONUS  ////////////////////////////////
#define EF_WTYPE         	     21	 // ?? ???? (?????) 
                                     //  1:??(??)
                                     //  2:??(???)    
                                     //  3:??               

                                     // 11:???         
                                     // 12:???             
                                     // 13:???             

                                     // 21:??               
                                     // 22:??               
                                     // 23:??               

                                     // 31:????            
                                     // 32:????           
                                     // 33:????           
 
                                     // 41:???
                                     
                                     // 51:???
                                    
                                     // 61:???
                                     // 62:???
                                     // 63:??? 

                                     // 101:?
                                     // 102:?? 
                                     // 103:????
                                     // 104:???   
////////////////////////////////////////////////////////////////////////////
#define EF_REQ_STR               22  // ?? 
#define EF_REQ_INT               23  // ??
#define EF_REQ_DEX               24  // ??
#define EF_REQ_CON               25  // ??
/////////////////////////////////////////////////////////////////////////
// * ? ?????, ???? ?? SIDC? ???? ???.
/////////////////////////////////////////////////////////////////////////


#define EF_ATTSPEED  	       	 26	 // ?? ????
#define EF_RANGE                 27  // ?? ????. ??? ???? ???.
////#define EF_PRICE				 28	 // ??
#define EF_RUNSPEED              29  // ?? ?????.
#define EF_SPELL    	    	 30	 // ?? Item? ??? ???? ??? ??
#define EF_DURATION              31  // ?? Item ????1 - ??? ??? ???? ??, ?????? ?? 
#define EF_PARM2     			 32	 // ?? Item ????2
#define EF_GRID                  33  // ?? Carry? ???? ??????
#define EF_GROUND                34  // ?? ????? ?? ???? ??
#define EF_CLAN                  35  // ??
#define EF_HWORDCOIN             36  // ?? 
#define EF_LWORDCOIN             37  // ?? 
#define EF_VOLATILE              38  // ?? ??? ?? ???? ???.  0:????  1:????  2:???   3:?? 4:?1  5:?2  6:?3
                                     //                               6:??+15   7:??+1
#define EF_KEYID                 39  // ??
#define EF_PARRY                 40  // ?? ??? ???
#define EF_HITRATE               41  // ?? ??? ???
#define EF_CRITICAL              42  // ?? ????
#define EF_SANC                  43  // ?? Sanctuary ?? ??? ???? ???? 
#define EF_SAVEMANA              44  // ?? 1 -> 99%
#define EF_HPADD                 45  // ?? 1 -> 101%   MAX_MP 
#define EF_MPADD                 46  // ?? 1 -> 101%   MAX_MP
#define EF_REGENHP               47  // ??
#define EF_REGENMP               48  // ??
#define EF_RESIST1               49  // ??
#define EF_RESIST2               50  // ??
#define EF_RESIST3               51  // ??
#define EF_RESIST4               52  // ??
#define EF_ACADD                 53  // ??
#define EF_RESISTALL             54  // ??
#define EF_BONUS                 55  // ??
#define EF_HWORDGUILD            56  // ??
#define EF_LWORDGUILD            57  // ??
#define EF_QUEST                 58  // ?? ??? 1?? ??, ??? Volatile? ?? ??? ? ?.
#define EF_UNIQUE                59  // ??
#define EF_MAGIC                 60  // ?? 1 -> 1% ?? 
#define EF_AMOUNT                61  // ??
#define EF_HWORDINDEX            62  // ??
#define EF_LWORDINDEX            63  // ??
#define EF_INIT1                 64  // ??
#define EF_INIT2                 65  // ??
#define EF_INIT3                 66  // ??
#define EF_DAMAGEADD             67  // ??
#define EF_MAGICADD              68  // ??
                                     // ?? 2?? ??? ??? ??? ?? ???? ??? ??? ?? ??? ?? ???? ??.   
                                     // ????? ???? ??? ?? ??? ??? ??? ???? ??? ???.
#define EF_HPADD2                69  // ?2   ??? ??? ?? ?? ???? ????.
#define EF_MPADD2                70  // ?2   ??? ??? ?? ?? ???? ????.
#define EF_CRITICAL2             71  // ?? ????
#define EF_ACADD2                72  // ??
#define EF_DAMAGE2               73  // 
#define EF_SPECIALALL            74  // ???? ???? ?? 

#define	EF_CURKILL				 75  // not used
#define EF_LTOTKILL				 76  // not used
#define EF_HTOTKILL				 77  // not used
#define EF_INCUBATE				 78  // ?????


#define EF_MOUNTLIFE			 79  // ? ? ?? 
#define EF_MOUNTHP				 80  // ? ? ?
#define EF_MOUNTSANC			 81  // ? ???
#define EF_MOUNTFEED			 82  // ? ??? ??	
#define EF_MOUNTKILL			 83  // ?? ?? ??? ???

#define EF_INCUDELAY             84
#define EF_SUBGUILD				 85	// SUB??, 0?? ???? 1,2,3?? ??

#define EF_MOBFACE				 86
#define EF_UNKNOW1				 87

#define EF_GRADE0				 100 // 0?
#define EF_GRADE1				 101 // 1?
#define EF_GRADE2				 102 // 2?
#define EF_GRADE3				 103 // 3?
#define EF_GRADE4				 104 // 4?
#define EF_GRADE5				 105 // 5?

#define EF_GIFTID				201
#define EF_MOBTYPE				 112
#define EF_SELADO				115
#define EF_ITEMTYPE				 116
#define EF_NOREFINE				 117
#define EF_NOTRADE				200
#define EF_DROPBONUS			202

#define EF_LIFESTEAL			150
#define EF_BONUSEXP				151
#define EF_POTIONHEAL			152
#define EF_BONUSEXPIND			153
#define EF_VAMPIRISM			154
#define EF_IGNORERESISTANCE		155
#define EF_SLOW					156
#define EF_RESISTANCE			157
// N�O USAR DO 121 at� o 130 POIS � USADO NA QUEST INICIANTE
//00488D32 eip
//009ffbcc 
//44d65000767