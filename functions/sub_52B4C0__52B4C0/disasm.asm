0x52B4C0: push    ecx
0x52B4C1: fldz
0x52B4C3: fcomp   dword ptr [ecx+0A0h]
0x52B4C9: fnstsw  ax
0x52B4CB: test    ah, 5
0x52B4CE: jp      short loc_52B4DE
0x52B4D0: fld     dword ptr [ecx+0A0h]
0x52B4D6: fstp    [esp+4+var_4]
0x52B4D9: fld     [esp+4+var_4]
0x52B4DC: pop     ecx
0x52B4DD: retn
0x52B4DE: fld     dword ptr ds:0A31E2Ch
0x52B4E4: fstp    [esp+4+var_4]
0x52B4E7: fld     [esp+4+var_4]
0x52B4EA: pop     ecx
0x52B4EB: retn
