0x5E0200: mov     eax, [esp+arg_8]
0x5E0204: fld     [esp+arg_C]
0x5E0208: push    esi
0x5E0209: mov     esi, ecx
0x5E020B: mov     ecx, [eax]
0x5E020D: mov     [esi+0E8h], ecx
0x5E0213: mov     edx, [eax+4]
0x5E0216: push    edi
0x5E0217: mov     edi, [esp+8+arg_4]
0x5E021B: test    edi, edi
0x5E021D: mov     [esi+0ECh], edx
0x5E0223: mov     eax, [eax+8]
0x5E0226: fstp    dword ptr [esi+0F4h]
0x5E022C: mov     [esi+0F0h], eax
0x5E0232: jz      short loc_5E024A
0x5E0234: mov     ecx, edi; this
0x5E0236: call    TESObjectCELL_IsInterior
0x5E023B: test    al, al
0x5E023D: jz      short loc_5E024A
0x5E023F: mov     [esi+0F8h], edi
0x5E0245: pop     edi
0x5E0246: pop     esi
0x5E0247: retn    10h
0x5E024A: mov     ecx, [esp+8+arg_0]
0x5E024E: pop     edi
0x5E024F: mov     [esi+0F8h], ecx
0x5E0255: pop     esi
0x5E0256: retn    10h
