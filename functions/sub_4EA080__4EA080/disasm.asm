0x4EA080: sub     esp, 8
0x4EA083: cmp     byte ptr [esp+8+arg_0], 0
0x4EA088: push    edi
0x4EA089: mov     edi, ecx
0x4EA08B: jz      short loc_4EA0C5
0x4EA08D: mov     eax, ds:0B333A0h
0x4EA092: mov     ecx, [eax+10h]; this
0x4EA095: call    NiAVObject_InitializePropertyState
0x4EA09A: mov     ecx, ds:0B333A0h
0x4EA0A0: mov     ecx, [ecx+10h]
0x4EA0A3: call    NiNode_UpdateDynamicEffectState
0x4EA0A8: fldz
0x4EA0AA: mov     edx, ds:0B333A0h
0x4EA0B0: push    0; a3
0x4EA0B2: push    ecx
0x4EA0B3: mov     ecx, [edx+10h]; this
0x4EA0B6: fstp    [esp+14h+a2]; a2
0x4EA0B9: call    NiAVObject_UpdateNiAVObject
0x4EA0BE: pop     edi
0x4EA0BF: add     esp, 8
0x4EA0C2: retn    4
0x4EA0C5: mov     edx, [edi+4]
0x4EA0C8: xor     eax, eax
0x4EA0CA: test    edx, edx
0x4EA0CC: push    esi
0x4EA0CD: jbe     short loc_4EA0E3
0x4EA0CF: mov     esi, [edi+8]
0x4EA0D2: mov     ecx, esi
0x4EA0D4: cmp     dword ptr [ecx], 0
0x4EA0D7: jnz     short loc_4EA157
0x4EA0D9: add     eax, 1
0x4EA0DC: add     ecx, 4
0x4EA0DF: cmp     eax, edx
0x4EA0E1: jb      short loc_4EA0D4
0x4EA0E3: xor     eax, eax
0x4EA0E5: test    eax, eax
0x4EA0E7: mov     [esp+10h+var_8], eax
0x4EA0EB: jz      short loc_4EA14F
0x4EA0ED: lea     ecx, [ecx+0]
0x4EA0F0: lea     eax, [esp+10h+arg_0]
0x4EA0F4: push    eax
0x4EA0F5: lea     ecx, [esp+14h+var_4]
0x4EA0F9: push    ecx
0x4EA0FA: lea     edx, [esp+18h+var_8]
0x4EA0FE: push    edx
0x4EA0FF: mov     ecx, edi
0x4EA101: mov     [esp+1Ch+arg_0], 0
0x4EA109: call    sub_452600
0x4EA10E: mov     esi, [esp+10h+arg_0]
0x4EA112: test    esi, esi
0x4EA114: jz      short loc_4EA148
0x4EA116: mov     eax, ds:0B333A0h
0x4EA11B: mov     ecx, [eax+10h]
0x4EA11E: push    ecx
0x4EA11F: mov     ecx, [esi]
0x4EA121: call    sub_4ECAE0
0x4EA126: mov     edx, ds:0B333A0h
0x4EA12C: mov     eax, [edx+10h]
0x4EA12F: mov     ecx, [esi]
0x4EA131: push    eax
0x4EA132: call    sub_4ECAE0
0x4EA137: mov     ecx, ds:0B333A0h
0x4EA13D: mov     edx, [ecx+10h]
0x4EA140: mov     ecx, [esi]
0x4EA142: push    edx
0x4EA143: call    sub_4ECAE0
0x4EA148: cmp     [esp+10h+var_8], 0
0x4EA14D: jnz     short loc_4EA0F0
0x4EA14F: pop     esi
0x4EA150: pop     edi
0x4EA151: add     esp, 8
0x4EA154: retn    4
0x4EA157: mov     eax, [esi+eax*4]
0x4EA15A: jmp     short loc_4EA0E5
