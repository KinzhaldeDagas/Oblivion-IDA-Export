0x9F2CC0: push    offset aOfferRefused; "Offer refused"
0x9F2CC5: push    offset aSofferrefused; "sOfferRefused"
0x9F2CCA: mov     ecx, offset sOfferRefused
0x9F2CCF: call    GameSetting_ConstrAndReg
0x9F2CD4: push    offset sub_A22290; void (__cdecl *)()
0x9F2CD9: call    _atexit
0x9F2CDE: pop     ecx
0x9F2CDF: retn
