0x69FBF0: push    0FFFFFFFFh
0x69FBF2: push    offset SEH_69FBF0
0x69FBF7: mov     eax, large fs:0
0x69FBFD: push    eax
0x69FBFE: sub     esp, 1Ch
0x69FC01: push    ebp
0x69FC02: push    esi
0x69FC03: push    edi
0x69FC04: mov     eax, ds:0B30AACh
0x69FC09: xor     eax, esp
0x69FC0B: push    eax
0x69FC0C: lea     eax, [esp+38h+var_C]
0x69FC10: mov     large fs:0, eax
0x69FC16: mov     eax, [esp+38h+arg_0]
0x69FC1A: xor     edi, edi
0x69FC1C: test    eax, eax
0x69FC1E: jz      loc_69FD03
0x69FC24: cmp     byte ptr [eax], 0
0x69FC27: jz      loc_69FD03
0x69FC2D: mov     ecx, ds:0B33A1Ch
0x69FC33: push    1
0x69FC35: push    edi
0x69FC36: push    edi
0x69FC37: push    eax
0x69FC38: call    sub_439EB0
0x69FC3D: mov     esi, eax
0x69FC3F: test    esi, esi
0x69FC41: jz      loc_69FD03
0x69FC47: lea     ecx, [esp+38h+var_28]
0x69FC4B: call    sub_478B90
0x69FC50: fld1
0x69FC52: fst     [esp+38h+var_10]
0x69FC56: fst     [esp+38h+var_14]
0x69FC5A: fstp    [esp+38h+var_18]
0x69FC5E: lea     eax, [esp+38h+var_28]
0x69FC62: push    eax
0x69FC63: mov     ecx, esi
0x69FC65: mov     [esp+3Ch+var_4], edi
0x69FC69: call    sub_700610
0x69FC6E: mov     ebp, eax
0x69FC70: test    ebp, ebp
0x69FC72: jz      short loc_69FCC6
0x69FC74: fld1
0x69FC76: and     word ptr [ebp+18h], 0FFFEh
0x69FC7C: cmp     dword ptr [ebp+1Ch], 0
0x69FC80: fabs
0x69FC82: fstp    [esp+38h+arg_0]
0x69FC86: lea     edi, [ebp+30h]
0x69FC89: fld     [esp+38h+arg_0]
0x69FC8D: mov     ecx, 9
0x69FC92: fstp    dword ptr [ebp+60h]
0x69FC95: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x69FC9A: rep movsd
0x69FC9C: mov     ecx, ds:0B3F9A8h
0x69FCA2: mov     [ebp+54h], ecx
0x69FCA5: mov     edx, ds:0B3F9ACh
0x69FCAB: mov     [ebp+58h], edx
0x69FCAE: mov     eax, ds:0B3F9B0h
0x69FCB3: mov     [ebp+5Ch], eax
0x69FCB6: jz      short loc_69FCBF
0x69FCB8: mov     dword ptr [ebp+1Ch], 0
0x69FCBF: mov     ecx, ebp; this
0x69FCC1: call    NiAVObject_InitializePropertyState
0x69FCC6: mov     ecx, [esp+38h+var_28]
0x69FCCA: test    ecx, ecx
0x69FCCC: mov     [esp+38h+var_4], 0FFFFFFFFh
0x69FCD4: jz      short loc_69FCDE
0x69FCD6: mov     edx, [ecx]
0x69FCD8: mov     eax, [edx]
0x69FCDA: push    1
0x69FCDC: call    eax
0x69FCDE: mov     ecx, [esp+38h+var_24]
0x69FCE2: test    ecx, ecx
0x69FCE4: jz      short loc_69FCEE
0x69FCE6: mov     edx, [ecx]
0x69FCE8: mov     eax, [edx]
0x69FCEA: push    1
0x69FCEC: call    eax
0x69FCEE: mov     eax, ebp
0x69FCF0: mov     ecx, [esp+38h+var_C]
0x69FCF4: mov     large fs:0, ecx
0x69FCFB: pop     ecx
0x69FCFC: pop     edi
0x69FCFD: pop     esi
0x69FCFE: pop     ebp
0x69FCFF: add     esp, 28h
0x69FD02: retn
0x69FD03: mov     eax, edi
0x69FD05: mov     ecx, [esp+38h+var_C]
0x69FD09: mov     large fs:0, ecx
0x69FD10: pop     ecx
0x69FD11: pop     edi
0x69FD12: pop     esi
0x69FD13: pop     ebp
0x69FD14: add     esp, 28h
0x69FD17: retn
