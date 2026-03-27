0x9F15C0: push    offset aRechargeThisIt; "Recharge this item for"
0x9F15C5: push    offset aSconfirmrechar; "sConfirmRecharge"
0x9F15CA: mov     ecx, offset dword_B38858
0x9F15CF: call    GameSetting_ConstrAndReg
0x9F15D4: push    offset sub_A217D0; void (__cdecl *)()
0x9F15D9: call    _atexit
0x9F15DE: pop     ecx
0x9F15DF: retn
