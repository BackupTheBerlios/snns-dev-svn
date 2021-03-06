/*****************************************************************************
  FILE           : $Source: /projects/higgs1/SNNS/CVS/SNNS/xgui/sources/d3_links.ph,v $
  SHORTNAME      : links.ph
  SNNS VERSION   : 4.2

  PURPOSE        : header for d3_links.c 
  NOTES          :

  AUTHOR         : Ralf Huebner 
  DATE           : 1.12.1991

  CHANGED BY     : Sven Doering
  RCS VERSION    : $Revision: 2.6 $
  LAST CHANGE    : $Date: 1998/02/25 15:20:19 $

    Copyright (c) 1990-1995  SNNS Group, IPVR, Univ. Stuttgart, FRG
    Copyright (c) 1996-1998  SNNS Group, WSI, Univ. Tuebingen, FRG

******************************************************************************/
#ifndef _D3_LINKS_DEFINED_
#define _D3_LINKS_DEFINED_

/* begin global definition section */

void d3_createLinkPannel (Widget w, Widget button, caddr_t call_data);

/* end global definition section */

/* begin private definition section */

static Widget linksOnButton, linksOffButton, linksLabelButton, linksColorButton;
static Widget fontSmallButton, fontBigButton;

static d3_state_type temp_state;

/* end private definition section */

#endif 






/* end of file */
/* lines: 25 */
