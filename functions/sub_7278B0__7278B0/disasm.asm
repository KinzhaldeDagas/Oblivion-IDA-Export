0x7278B0: push    ecx
0x7278B1: push    ebx
0x7278B2: push    ebp
0x7278B3: push    esi
0x7278B4: mov     esi, [esp+10h+a2]
0x7278B8: push    edi
0x7278B9: mov     ebp, ecx
0x7278BB: push    esi; a2
0x7278BC: mov     [esp+18h+var_4], ebp
0x7278C0: call    sub_7009A0
0x7278C5: mov     eax, ds:0B3FD90h
0x7278CA: push    eax; ArgList
0x7278CB: call    TESOutput_PrintString
0x7278D0: movzx   edi, word ptr [esi+0Ah]
0x7278D4: movzx   ecx, word ptr [esi+8]
0x7278D8: add     esp, 4
0x7278DB: cmp     edi, ecx
0x7278DD: mov     [esp+14h+a2], eax
0x7278E1: jb      short loc_7278F1
0x7278E3: movzx   edx, word ptr [esi+0Eh]
0x7278E7: add     edx, edi
0x7278E9: push    edx
0x7278EA: mov     ecx, esi
0x7278EC: call    NiTArray_SetSize
0x7278F1: lea     eax, [esp+14h+a2]
0x7278F5: push    eax
0x7278F6: push    edi
0x7278F7: mov     ecx, esi
0x7278F9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7278FE: movzx   ecx, word ptr [ebp+0Ch]
0x727902: push    ecx; __int16
0x727903: push    offset aM_usvertexcoun; "m_usVertexCount"
0x727908: call    TESOutput_PrintLabeledUnsignedShort
0x72790D: movzx   edi, word ptr [esi+0Ah]
0x727911: movzx   edx, word ptr [esi+8]
0x727915: add     esp, 8
0x727918: cmp     edi, edx
0x72791A: mov     [esp+14h+a2], eax
0x72791E: jb      short loc_72792E
0x727920: movzx   eax, word ptr [esi+0Eh]
0x727924: add     eax, edi
0x727926: push    eax
0x727927: mov     ecx, esi
0x727929: call    NiTArray_SetSize
0x72792E: lea     ecx, [esp+14h+a2]
0x727932: push    ecx
0x727933: push    edi
0x727934: mov     ecx, esi
0x727936: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72793B: mov     edx, [ebp+10h]
0x72793E: push    edx; int
0x72793F: push    offset aM_uidatastream; "m_uiDataStreamCount"
0x727944: call    TESOutput_PrintLabeledUnsignedInt
0x727949: movzx   edi, word ptr [esi+0Ah]
0x72794D: mov     [esp+1Ch+a2], eax
0x727951: movzx   eax, word ptr [esi+8]
0x727955: add     esp, 8
0x727958: cmp     edi, eax
0x72795A: jb      short loc_72796A
0x72795C: movzx   ecx, word ptr [esi+0Eh]
0x727960: add     ecx, edi
0x727962: push    ecx
0x727963: mov     ecx, esi
0x727965: call    NiTArray_SetSize
0x72796A: lea     edx, [esp+14h+a2]
0x72796E: push    edx
0x72796F: push    edi
0x727970: mov     ecx, esi
0x727972: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x727977: xor     ebx, ebx
0x727979: cmp     [ebp+10h], ebx
0x72797C: jbe     loc_727A23
0x727982: mov     [esp+14h+a2], ebx
0x727986: jmp     short loc_727990
0x727988: align 10h
0x727990: push    ebx; int
0x727991: push    offset aDatastreamInde; "    DataStream Index"
0x727996: call    TESOutput_PrintLabeledUnsignedInt
0x72799B: movzx   edi, word ptr [esi+0Ah]
0x72799F: mov     ebp, eax
0x7279A1: movzx   eax, word ptr [esi+8]
0x7279A5: add     esp, 8
0x7279A8: cmp     edi, eax
0x7279AA: jb      short loc_7279BA
0x7279AC: movzx   ecx, word ptr [esi+0Eh]
0x7279B0: add     ecx, edi
0x7279B2: push    ecx
0x7279B3: mov     ecx, esi
0x7279B5: call    NiTArray_SetSize
0x7279BA: movzx   edx, word ptr [esi+0Ah]
0x7279BE: cmp     edi, edx
0x7279C0: jb      short loc_7279D4
0x7279C2: test    ebp, ebp
0x7279C4: lea     eax, [edi+1]
0x7279C7: mov     [esi+0Ah], ax
0x7279CB: jz      short loc_7279F7
0x7279CD: add     word ptr [esi+0Ch], 1
0x7279D2: jmp     short loc_7279F7
0x7279D4: test    ebp, ebp
0x7279D6: jz      short loc_7279E8
0x7279D8: mov     ecx, [esi+4]
0x7279DB: cmp     dword ptr [ecx+edi*4], 0
0x7279DF: jnz     short loc_7279F7
0x7279E1: add     word ptr [esi+0Ch], 1
0x7279E6: jmp     short loc_7279F7
0x7279E8: mov     edx, [esi+4]
0x7279EB: cmp     dword ptr [edx+edi*4], 0
0x7279EF: jz      short loc_7279F7
0x7279F1: add     word ptr [esi+0Ch], 0FFFFh
0x7279F7: mov     eax, [esi+4]
0x7279FA: mov     [eax+edi*4], ebp
0x7279FD: mov     ebp, [esp+14h+var_4]
0x727A01: mov     ecx, [ebp+14h]
0x727A04: mov     edi, [esp+14h+a2]
0x727A08: push    esi
0x727A09: add     ecx, edi
0x727A0B: call    sub_726F90
0x727A10: add     ebx, 1
0x727A13: add     edi, 1Ch
0x727A16: cmp     ebx, [ebp+10h]
0x727A19: mov     [esp+14h+a2], edi
0x727A1D: jb      loc_727990
0x727A23: movzx   eax, word ptr [ebp+26h]
0x727A27: push    eax; int
0x727A28: push    offset aM_adatablocks_; "m_aDataBlocks.GetSize()"
0x727A2D: call    TESOutput_PrintLabeledUnsignedInt
0x727A32: movzx   edi, word ptr [esi+0Ah]
0x727A36: movzx   ecx, word ptr [esi+8]
0x727A3A: add     esp, 8
0x727A3D: cmp     edi, ecx
0x727A3F: mov     ebx, eax
0x727A41: jb      short loc_727A51
0x727A43: movzx   edx, word ptr [esi+0Eh]
0x727A47: add     edx, edi
0x727A49: push    edx
0x727A4A: mov     ecx, esi
0x727A4C: call    NiTArray_SetSize
0x727A51: movzx   eax, word ptr [esi+0Ah]
0x727A55: cmp     edi, eax
0x727A57: jb      short loc_727A6B
0x727A59: test    ebx, ebx
0x727A5B: lea     ecx, [edi+1]
0x727A5E: mov     [esi+0Ah], cx
0x727A62: jz      short loc_727A8E
0x727A64: add     word ptr [esi+0Ch], 1
0x727A69: jmp     short loc_727A8E
0x727A6B: test    ebx, ebx
0x727A6D: jz      short loc_727A7F
0x727A6F: mov     edx, [esi+4]
0x727A72: cmp     dword ptr [edx+edi*4], 0
0x727A76: jnz     short loc_727A8E
0x727A78: add     word ptr [esi+0Ch], 1
0x727A7D: jmp     short loc_727A8E
0x727A7F: mov     eax, [esi+4]
0x727A82: cmp     dword ptr [eax+edi*4], 0
0x727A86: jz      short loc_727A8E
0x727A88: add     word ptr [esi+0Ch], 0FFFFh
0x727A8E: mov     ecx, [esi+4]
0x727A91: mov     edx, [esp+14h+var_4]
0x727A95: xor     ebp, ebp
0x727A97: mov     [ecx+edi*4], ebx
0x727A9A: cmp     [edx+26h], bp
0x727A9E: jbe     loc_727C1C
0x727AA4: push    ebp; int
0x727AA5: push    offset aDatablockIndex; "    DataBlock Index"
0x727AAA: call    TESOutput_PrintLabeledUnsignedInt
0x727AAF: movzx   edi, word ptr [esi+0Ah]
0x727AB3: mov     ebx, eax
0x727AB5: movzx   eax, word ptr [esi+8]
0x727AB9: add     esp, 8
0x727ABC: cmp     edi, eax
0x727ABE: jb      short loc_727ACE
0x727AC0: movzx   ecx, word ptr [esi+0Eh]
0x727AC4: add     ecx, edi
0x727AC6: push    ecx
0x727AC7: mov     ecx, esi
0x727AC9: call    NiTArray_SetSize
0x727ACE: movzx   edx, word ptr [esi+0Ah]
0x727AD2: cmp     edi, edx
0x727AD4: jb      short loc_727AE8
0x727AD6: test    ebx, ebx
0x727AD8: lea     eax, [edi+1]
0x727ADB: mov     [esi+0Ah], ax
0x727ADF: jz      short loc_727B0B
0x727AE1: add     word ptr [esi+0Ch], 1
0x727AE6: jmp     short loc_727B0B
0x727AE8: test    ebx, ebx
0x727AEA: jz      short loc_727AFC
0x727AEC: mov     ecx, [esi+4]
0x727AEF: cmp     dword ptr [ecx+edi*4], 0
0x727AF3: jnz     short loc_727B0B
0x727AF5: add     word ptr [esi+0Ch], 1
0x727AFA: jmp     short loc_727B0B
0x727AFC: mov     edx, [esi+4]
0x727AFF: cmp     dword ptr [edx+edi*4], 0
0x727B03: jz      short loc_727B0B
0x727B05: add     word ptr [esi+0Ch], 0FFFFh
0x727B0B: mov     eax, [esi+4]
0x727B0E: mov     ecx, [esp+14h+var_4]
0x727B12: mov     [eax+edi*4], ebx
0x727B15: mov     edx, [ecx+20h]
0x727B18: mov     ecx, [edx+ebp*4]
0x727B1B: test    ecx, ecx
0x727B1D: jz      short loc_727B2A
0x727B1F: push    esi
0x727B20: call    sub_727820
0x727B25: jmp     loc_727C09
0x727B2A: push    0; int
0x727B2C: push    offset aM_uidatablocks; "        m_uiDataBlockSize"
0x727B31: call    TESOutput_PrintLabeledSignedInt
0x727B36: movzx   edi, word ptr [esi+0Ah]
0x727B3A: mov     ebx, eax
0x727B3C: movzx   eax, word ptr [esi+8]
0x727B40: add     esp, 8
0x727B43: cmp     edi, eax
0x727B45: jb      short loc_727B55
0x727B47: movzx   ecx, word ptr [esi+0Eh]
0x727B4B: add     ecx, edi
0x727B4D: push    ecx
0x727B4E: mov     ecx, esi
0x727B50: call    NiTArray_SetSize
0x727B55: movzx   edx, word ptr [esi+0Ah]
0x727B59: cmp     edi, edx
0x727B5B: jb      short loc_727B6F
0x727B5D: test    ebx, ebx
0x727B5F: lea     eax, [edi+1]
0x727B62: mov     [esi+0Ah], ax
0x727B66: jz      short loc_727B92
0x727B68: add     word ptr [esi+0Ch], 1
0x727B6D: jmp     short loc_727B92
0x727B6F: test    ebx, ebx
0x727B71: jz      short loc_727B83
0x727B73: mov     ecx, [esi+4]
0x727B76: cmp     dword ptr [ecx+edi*4], 0
0x727B7A: jnz     short loc_727B92
0x727B7C: add     word ptr [esi+0Ch], 1
0x727B81: jmp     short loc_727B92
0x727B83: mov     edx, [esi+4]
0x727B86: cmp     dword ptr [edx+edi*4], 0
0x727B8A: jz      short loc_727B92
0x727B8C: add     word ptr [esi+0Ch], 0FFFFh
0x727B92: mov     eax, [esi+4]
0x727B95: push    offset aNull; "NULL"
0x727B9A: push    offset aM_pucdatablock; "        m_pucDataBlock"
0x727B9F: mov     [eax+edi*4], ebx
0x727BA2: call    TESOutput_PrintLabeledString
0x727BA7: movzx   edi, word ptr [esi+0Ah]
0x727BAB: movzx   ecx, word ptr [esi+8]
0x727BAF: add     esp, 8
0x727BB2: cmp     edi, ecx
0x727BB4: mov     ebx, eax
0x727BB6: jb      short loc_727BC6
0x727BB8: movzx   edx, word ptr [esi+0Eh]
0x727BBC: add     edx, edi
0x727BBE: push    edx
0x727BBF: mov     ecx, esi
0x727BC1: call    NiTArray_SetSize
0x727BC6: movzx   eax, word ptr [esi+0Ah]
0x727BCA: cmp     edi, eax
0x727BCC: jb      short loc_727BE0
0x727BCE: test    ebx, ebx
0x727BD0: lea     ecx, [edi+1]
0x727BD3: mov     [esi+0Ah], cx
0x727BD7: jz      short loc_727C03
0x727BD9: add     word ptr [esi+0Ch], 1
0x727BDE: jmp     short loc_727C03
0x727BE0: test    ebx, ebx
0x727BE2: jz      short loc_727BF4
0x727BE4: mov     edx, [esi+4]
0x727BE7: cmp     dword ptr [edx+edi*4], 0
0x727BEB: jnz     short loc_727C03
0x727BED: add     word ptr [esi+0Ch], 1
0x727BF2: jmp     short loc_727C03
0x727BF4: mov     eax, [esi+4]
0x727BF7: cmp     dword ptr [eax+edi*4], 0
0x727BFB: jz      short loc_727C03
0x727BFD: add     word ptr [esi+0Ch], 0FFFFh
0x727C03: mov     ecx, [esi+4]
0x727C06: mov     [ecx+edi*4], ebx
0x727C09: mov     edx, [esp+14h+var_4]
0x727C0D: movzx   eax, word ptr [edx+26h]
0x727C11: add     ebp, 1
0x727C14: cmp     ebp, eax
0x727C16: jb      loc_727AA4
0x727C1C: pop     edi
0x727C1D: pop     esi
0x727C1E: pop     ebp
0x727C1F: pop     ebx
0x727C20: pop     ecx
0x727C21: retn    4
