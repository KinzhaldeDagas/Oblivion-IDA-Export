0x75EC40: push    ebx
0x75EC41: mov     ebx, [esp+4+arg_4]
0x75EC45: push    esi
0x75EC46: push    edi
0x75EC47: mov     edi, [esp+0Ch+arg_8]
0x75EC4B: mov     esi, ecx
0x75EC4D: mov     ecx, [ebx+1Ch]
0x75EC50: mov     edx, [esi+14h]
0x75EC53: movzx   eax, di
0x75EC56: lea     eax, [eax+eax*2]
0x75EC59: lea     eax, [ecx+eax*4]
0x75EC5C: mov     [eax], edx
0x75EC5E: mov     ecx, [esi+18h]
0x75EC61: mov     [eax+4], ecx
0x75EC64: mov     edx, [esi+1Ch]
0x75EC67: mov     [eax+8], edx
0x75EC6A: cmp     byte ptr [esi+0Ch], 0
0x75EC6E: jz      short loc_75EC99
0x75EC70: cmp     dword ptr [esi+10h], 0
0x75EC74: jz      short loc_75EC99
0x75EC76: mov     edx, [esi+24h]
0x75EC79: fld     dword ptr [esi+20h]
0x75EC7C: mov     edx, [edx+10h]
0x75EC7F: mov     ecx, [esi+10h]
0x75EC82: mov     eax, [ecx]
0x75EC84: mov     eax, [eax+5Ch]
0x75EC87: push    edx
0x75EC88: push    edi
0x75EC89: sub     esp, 8
0x75EC8C: fstp    [esp+1Ch+var_18]
0x75EC90: fld     [esp+1Ch+arg_0]
0x75EC94: fstp    [esp+1Ch+var_1C]
0x75EC97: call    eax
0x75EC99: cmp     byte ptr [esi+0Dh], 0
0x75EC9D: jz      short loc_75ECA9
0x75EC9F: mov     edx, [ebx]
0x75ECA1: mov     eax, [edx+58h]
0x75ECA4: push    edi
0x75ECA5: mov     ecx, ebx
0x75ECA7: call    eax
0x75ECA9: pop     edi
0x75ECAA: pop     esi
0x75ECAB: pop     ebx
0x75ECAC: retn    0Ch
