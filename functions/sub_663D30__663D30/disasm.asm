0x663D30: push    0FFFFFFFFh
0x663D32: push    offset SEH_62F810
0x663D37: mov     eax, large fs:0
0x663D3D: push    eax
0x663D3E: sub     esp, 2Ch
0x663D41: push    ebx
0x663D42: push    esi
0x663D43: push    edi
0x663D44: mov     eax, ds:0B30AACh
0x663D49: xor     eax, esp
0x663D4B: push    eax
0x663D4C: lea     eax, [esp+48h+var_C]
0x663D50: mov     large fs:0, eax
0x663D56: mov     esi, ecx
0x663D58: mov     edi, [esi+638h]
0x663D5E: test    edi, edi
0x663D60: mov     dword ptr [esi+63Ch], 0
0x663D6A: jz      loc_663E63
0x663D70: call    TESObjectREFR_GetParentCell
0x663D75: cmp     edi, eax
0x663D77: jz      loc_663E63
0x663D7D: mov     ecx, esi; this
0x663D7F: call    TESObjectREFR_GetWorldSpace
0x663D84: cmp     edi, eax
0x663D86: jz      loc_663E63
0x663D8C: call    sub_67F0A0
0x663D91: push    1
0x663D93: mov     byte ptr [esp+4Ch+var_34], al
0x663D97: call    sub_67F0B0
0x663D9C: call    sub_67F0E0
0x663DA1: push    1
0x663DA3: mov     byte ptr [esp+50h+var_38], al
0x663DA7: call    sub_67F0F0
0x663DAC: call    sub_67F0C0
0x663DB1: push    0
0x663DB3: mov     byte ptr [esp+54h+var_30], al
0x663DB7: call    sub_67F0D0
0x663DBC: mov     eax, [esi+638h]
0x663DC2: mov     cl, [eax+4]
0x663DC5: add     esp, 0Ch
0x663DC8: xor     ebx, ebx
0x663DCA: xor     edi, edi
0x663DCC: cmp     cl, 30h ; '0'
0x663DCF: jnz     short loc_663DD5
0x663DD1: mov     ebx, eax
0x663DD3: jmp     short loc_663DDC
0x663DD5: cmp     cl, 35h ; '5'
0x663DD8: jnz     short loc_663DDC
0x663DDA: mov     edi, eax
0x663DDC: lea     ecx, [esp+48h+var_20]
0x663DE0: call    sub_68A9F0
0x663DE5: mov     eax, [esi+62Ch]
0x663DEB: mov     ecx, [esi+630h]
0x663DF1: mov     edx, [esi+634h]
0x663DF7: push    edi
0x663DF8: mov     [esp+4Ch+var_2C], eax
0x663DFC: push    ebx
0x663DFD: mov     [esp+50h+var_28], ecx
0x663E01: mov     ecx, ds:0B333C4h
0x663E07: lea     eax, [esp+50h+var_2C]
0x663E0B: push    eax
0x663E0C: push    ecx
0x663E0D: lea     ecx, [esp+58h+var_20]
0x663E11: mov     [esp+58h+var_4], 0
0x663E19: mov     [esp+58h+var_24], edx
0x663E1D: call    sub_68B030
0x663E22: lea     ecx, [esp+48h+var_20]
0x663E26: call    sub_68A1B0
0x663E2B: mov     edx, [esp+48h+var_38]
0x663E2F: push    edx
0x663E30: mov     [esi+63Ch], eax
0x663E36: call    sub_67F0F0
0x663E3B: mov     eax, [esp+4Ch+var_34]
0x663E3F: push    eax
0x663E40: call    sub_67F0B0
0x663E45: mov     ecx, [esp+50h+var_30]
0x663E49: push    ecx
0x663E4A: call    sub_67F0D0
0x663E4F: add     esp, 0Ch
0x663E52: lea     ecx, [esp+48h+var_20]
0x663E56: mov     [esp+48h+var_4], 0FFFFFFFFh
0x663E5E: call    sub_68AA10
0x663E63: mov     ecx, [esp+48h+var_C]
0x663E67: mov     large fs:0, ecx
0x663E6E: pop     ecx
0x663E6F: pop     edi
0x663E70: pop     esi
0x663E71: pop     ebx
0x663E72: add     esp, 38h
0x663E75: retn
