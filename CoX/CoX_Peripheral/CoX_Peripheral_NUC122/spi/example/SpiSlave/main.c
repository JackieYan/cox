//*****************************************************************************
//
//! \file main.c
//! \brief Test main.
//! \version 1.0
//! \date 5/17/2011
//! \author CooCox
//! \copy
//!
//! Copyright (c) 2009-2011 CooCox.  All rights reserved.
//
//*****************************************************************************
#include "SpiSlave.h"
int main()
{
    SpiReceiveTransferInit();
 	while(1)
    {
        SpiSlaveModeConfig();
    }
}
