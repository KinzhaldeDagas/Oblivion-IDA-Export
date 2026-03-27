0x60DF20: push    ecx
0x60DF21: push    ebp
0x60DF22: mov     ebp, ecx
0x60DF24: mov     al, [ebp+8]
0x60DF27: shr     al, 3
0x60DF2A: test    al, 1
0x60DF2C: jz      loc_60E003
0x60DF32: cmp     byte ptr [ebp+3Ch], 0
0x60DF36: jz      short loc_60DF41
0x60DF38: mov     byte ptr [ebp+3Ch], 0
0x60DF3C: pop     ebp
0x60DF3D: pop     ecx
0x60DF3E: retn    4
0x60DF41: mov     ecx, [ebp+30h]
0x60DF44: test    ecx, ecx
0x60DF46: push    edi
0x60DF47: jz      short loc_60DF6A
0x60DF49: mov     edx, [ecx]
0x60DF4B: mov     eax, [edx+8]
0x60DF4E: call    eax
0x60DF50: mov     edi, eax
0x60DF52: test    edi, edi
0x60DF54: jz      short loc_60DF6C
0x60DF56: cmp     word ptr [edi+0B6h], 0
0x60DF5E: jbe     short loc_60DF6C
0x60DF60: mov     ecx, [edi+0B0h]
0x60DF66: mov     eax, [ecx]
0x60DF68: jmp     short loc_60DF6E
0x60DF6A: xor     edi, edi
0x60DF6C: xor     eax, eax
0x60DF6E: test    eax, eax
0x60DF70: jz      loc_60E002
0x60DF76: mov     eax, [eax+0Ch]
0x60DF79: push    esi
0x60DF7A: push    eax
0x60DF7B: push    offset stru_B3CAC0
0x60DF80: call    NiRTTI_Cast
0x60DF85: mov     esi, eax
0x60DF87: add     esp, 8
0x60DF8A: test    esi, esi
0x60DF8C: jz      short loc_60E001
0x60DF8E: lea     edx, [esp+10h+var_4]
0x60DF92: push    edx
0x60DF93: push    offset aOpen; "Open"
0x60DF98: lea     ecx, [esi+58h]
0x60DF9B: call    NiTMap_GetAt
0x60DFA0: test    al, al
0x60DFA2: jz      short loc_60E001
0x60DFA4: mov     eax, [esp+10h+var_4]
0x60DFA8: test    eax, eax
0x60DFAA: jz      short loc_60E001
0x60DFAC: cmp     dword ptr [eax+44h], 1
0x60DFB0: jz      short loc_60E001
0x60DFB2: push    offset aClose; "Close"
0x60DFB7: mov     ecx, esi
0x60DFB9: call    sub_4715A0
0x60DFBE: test    eax, eax
0x60DFC0: jz      short loc_60E001
0x60DFC2: cmp     dword ptr [eax+44h], 1
0x60DFC6: jz      short loc_60E001
0x60DFC8: and     word ptr [ebp+8], 0FFF7h
0x60DFCE: push    edi
0x60DFCF: call    sub_4DC270
0x60DFD4: mov     esi, eax
0x60DFD6: add     esp, 4
0x60DFD9: test    esi, esi
0x60DFDB: jz      short loc_60E001
0x60DFDD: push    offset unk_A2F830; lpCriticalSection
0x60DFE2: mov     ecx, offset stru_B3B880
0x60DFE7: call    NiEnterCriticalSection
0x60DFEC: push    esi
0x60DFED: mov     ecx, offset dword_B3B800
0x60DFF2: call    BSSimpleList_PushFront
0x60DFF7: mov     ecx, offset stru_B3B880; lpCriticalSection
0x60DFFC: call    NiLeaveCriticalSection_0
0x60E001: pop     esi
0x60E002: pop     edi
0x60E003: pop     ebp
0x60E004: pop     ecx
0x60E005: retn    4
