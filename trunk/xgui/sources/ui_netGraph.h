/*****************************************************************************
  FILE           : $Source: /projects/higgs1/SNNS/CVS/SNNS/xgui/sources/ui_netGraph.h,v $
  SHORTNAME      : netGraph.h
  SNNS VERSION   : 4.2

  PURPOSE        : Header file of correspondent '.c' file
  NOTES          :

  AUTHOR         : Tilman Sommer
  DATE           : 18.5.1990

  CHANGED BY     :
  RCS VERSION    : $Revision: 2.7 $
  LAST CHANGE    : $Date: 1998/02/25 15:22:25 $

    Copyright (c) 1990-1995  SNNS Group, IPVR, Univ. Stuttgart, FRG
    Copyright (c) 1996-1998  SNNS Group, WSI, Univ. Tuebingen, FRG
             
******************************************************************************/


#ifndef _UI_NETGRAPH_DEFINED_
#define _UI_NETGRAPH_DEFINED_

extern void ui_drawGrowingThing (struct Ui_DisplayType *, struct PosType, int);
extern void ui_drawUnit(struct Ui_DisplayType *, int, FlagType);
extern void ui_drawLink(struct Ui_DisplayType *, int, int, FlintType, FlagType);


/* dimension of a unit */
extern int ui_unitWidth;
extern int ui_unitHeight;

#endif /* _UI_NETGRAPH_DEFINED_ */


/* end of file */
/* lines: 30 */

/* 61 lines generated by deleteprivatedefinitions.awk */
