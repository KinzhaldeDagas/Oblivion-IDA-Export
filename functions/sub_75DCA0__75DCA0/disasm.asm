0x75DCA0: sub     esp, 0Ch
0x75DCA3: push    esi
0x75DCA4: push    edi
0x75DCA5: mov     edi, [esp+14h+arg_0]
0x75DCA9: push    edi
0x75DCAA: mov     esi, ecx
0x75DCAC: call    sub_759DE0
0x75DCB1: cmp     dword ptr [edi+0D8h], 0A010000h
0x75DCBB: ja      short loc_75DCDC
0x75DCBD: movzx   eax, word ptr [esi+8]
0x75DCC1: push    1
0x75DCC3: mov     ecx, esi
0x75DCC5: mov     [esi+70h], eax
0x75DCC8: call    sub_75DB40
0x75DCCD: mov     ecx, edi
0x75DCCF: call    sub_712A20
0x75DCD4: pop     edi
0x75DCD5: pop     esi
0x75DCD6: add     esp, 0Ch
0x75DCD9: retn    4
0x75DCDC: mov     eax, [edi+21Ch]
0x75DCE2: push    ebx
0x75DCE3: push    ebp
0x75DCE4: push    1
0x75DCE6: lea     ecx, [esp+20h+var_4]
0x75DCEA: push    ecx
0x75DCEB: mov     ebp, 4
0x75DCF0: push    ebp
0x75DCF1: lea     edx, [esi+70h]
0x75DCF4: push    edx
0x75DCF5: push    eax
0x75DCF6: mov     eax, [eax+4]
0x75DCF9: mov     [esp+30h+var_4], ebp
0x75DCFD: call    eax
0x75DCFF: mov     eax, [edi+21Ch]
0x75DD05: push    1
0x75DD07: lea     ecx, [esp+34h+var_4]
0x75DD0B: push    ecx
0x75DD0C: push    1
0x75DD0E: lea     edx, [esp+3Ch+arg_0]
0x75DD12: push    edx
0x75DD13: push    eax
0x75DD14: mov     eax, [eax+4]
0x75DD17: mov     [esp+44h+var_4], 1
0x75DD1F: call    eax
0x75DD21: xor     ebx, ebx
0x75DD23: cmp     byte ptr [esp+44h+arg_0], bl
0x75DD27: push    1
0x75DD29: setnz   cl
0x75DD2C: lea     edx, [esp+48h+var_4]
0x75DD30: push    edx
0x75DD31: mov     [esi+6Ch], cl
0x75DD34: mov     eax, [edi+21Ch]
0x75DD3A: mov     edx, [eax+4]
0x75DD3D: push    ebp
0x75DD3E: lea     ecx, [esp+50h+var_C]
0x75DD42: push    ecx
0x75DD43: push    eax
0x75DD44: mov     [esp+58h+var_4], ebp
0x75DD48: call    edx
0x75DD4A: mov     eax, [esp+58h+var_C]
0x75DD4E: add     esp, 3Ch
0x75DD51: lea     ebp, [esi+74h]
0x75DD54: push    eax
0x75DD55: mov     ecx, ebp
0x75DD57: call    NiTArray_SetSize
0x75DD5C: xor     esi, esi
0x75DD5E: cmp     [esp+1Ch+var_C], ebx
0x75DD62: jbe     short loc_75DDE2
0x75DD64: mov     eax, [edi+21Ch]
0x75DD6A: push    1
0x75DD6C: lea     ecx, [esp+20h+var_4]
0x75DD70: push    ecx
0x75DD71: push    4
0x75DD73: lea     edx, [esp+28h+var_8]
0x75DD77: push    edx
0x75DD78: push    eax
0x75DD79: mov     eax, [eax+4]
0x75DD7C: mov     [esp+30h+var_4], 4
0x75DD84: call    eax
0x75DD86: add     esp, 14h
0x75DD89: cmp     [esp+1Ch+var_8], ebx
0x75DD8D: jbe     short loc_75DDD9
0x75DD8F: push    10h; Size
0x75DD91: call    FormHeapAlloc
0x75DD96: add     esp, 4
0x75DD99: cmp     eax, ebx
0x75DD9B: jz      short loc_75DDBA
0x75DD9D: mov     dword ptr [eax], offset ??_7?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTArray<NiPointer<NiAVObject>>::`vftable'
0x75DDA3: mov     [eax+8], bx
0x75DDA7: mov     word ptr [eax+0Eh], 1
0x75DDAD: mov     [eax+0Ah], bx
0x75DDB1: mov     [eax+0Ch], bx
0x75DDB5: mov     [eax+4], ebx
0x75DDB8: jmp     short loc_75DDBC
0x75DDBA: xor     eax, eax
0x75DDBC: mov     ecx, [esp+1Ch+var_8]
0x75DDC0: push    ecx
0x75DDC1: mov     ecx, eax
0x75DDC3: mov     [esp+20h+var_4], eax
0x75DDC7: call    sub_523B10
0x75DDCC: lea     edx, [esp+1Ch+var_4]
0x75DDD0: push    edx
0x75DDD1: push    esi
0x75DDD2: mov     ecx, ebp
0x75DDD4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75DDD9: add     esi, 1
0x75DDDC: cmp     esi, [esp+1Ch+var_C]
0x75DDE0: jb      short loc_75DD64
0x75DDE2: pop     ebp
0x75DDE3: pop     ebx
0x75DDE4: mov     ecx, edi
0x75DDE6: call    sub_712A20
0x75DDEB: pop     edi
0x75DDEC: pop     esi
0x75DDED: add     esp, 0Ch
0x75DDF0: retn    4
