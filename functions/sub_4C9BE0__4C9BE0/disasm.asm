0x4C9BE0: push    esi
0x4C9BE1: mov     esi, [esp+4+arg_0]
0x4C9BE5: push    edi
0x4C9BE6: xor     edi, edi
0x4C9BE8: test    esi, esi
0x4C9BEA: jz      loc_4C9C75
0x4C9BF0: mov     ecx, esi; this
0x4C9BF2: call    TESObjectREFR_GetParentCell
0x4C9BF7: test    eax, eax
0x4C9BF9: jz      short loc_4C9C75
0x4C9BFB: mov     ecx, esi; this
0x4C9BFD: call    TESObjectREFR_GetParentCell
0x4C9C02: test    byte ptr [eax+24h], 1
0x4C9C06: jnz     short loc_4C9C75
0x4C9C08: mov     eax, [esi]
0x4C9C0A: mov     edx, [eax+174h]
0x4C9C10: mov     ecx, esi
0x4C9C12: call    edx
0x4C9C14: fld     dword ptr [eax]
0x4C9C16: fld     qword ptr ds:0A37650h
0x4C9C1C: call    unknown_libname_14
0x4C9C21: fstp    [esp+8+arg_0]
0x4C9C25: fld     [esp+8+arg_0]
0x4C9C29: call    Double_To_SInt32
0x4C9C2E: cdq
0x4C9C2F: xor     eax, edx
0x4C9C31: sub     eax, edx
0x4C9C33: cmp     eax, 800h
0x4C9C38: jle     short loc_4C9C3F
0x4C9C3A: mov     edi, 1
0x4C9C3F: mov     eax, [esi]
0x4C9C41: mov     edx, [eax+174h]
0x4C9C47: mov     ecx, esi
0x4C9C49: call    edx
0x4C9C4B: fld     dword ptr [eax+4]
0x4C9C4E: fld     qword ptr ds:0A37650h
0x4C9C54: call    unknown_libname_14
0x4C9C59: fstp    [esp+8+arg_0]
0x4C9C5D: fld     [esp+8+arg_0]
0x4C9C61: call    Double_To_SInt32
0x4C9C66: cdq
0x4C9C67: xor     eax, edx
0x4C9C69: sub     eax, edx
0x4C9C6B: cmp     eax, 800h
0x4C9C70: jle     short loc_4C9C75
0x4C9C72: add     edi, 2
0x4C9C75: mov     eax, edi
0x4C9C77: pop     edi
0x4C9C78: pop     esi
0x4C9C79: retn
