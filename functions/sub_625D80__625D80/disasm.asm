0x625D80: push    0FFFFFFFFh
0x625D82: push    offset SEH_625D80
0x625D87: mov     eax, large fs:0
0x625D8D: push    eax
0x625D8E: push    ecx
0x625D8F: push    ebx
0x625D90: push    esi
0x625D91: push    edi
0x625D92: mov     eax, ds:0B30AACh
0x625D97: xor     eax, esp
0x625D99: push    eax
0x625D9A: lea     eax, [esp+20h+var_C]
0x625D9E: mov     large fs:0, eax
0x625DA4: mov     esi, ecx
0x625DA6: mov     [esp+20h+var_10], esi
0x625DAA: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x625DAF: mov     ecx, [esp+20h+arg_0]
0x625DB3: xor     ebx, ebx
0x625DB5: cmp     ecx, ebx
0x625DB7: mov     [esp+20h+var_4], ebx
0x625DBB: mov     dword ptr [esi], offset ??_7DialoguePackage@@6B@; const DialoguePackage::`vftable'
0x625DC1: mov     [esi+50h], ecx
0x625DC4: jz      short loc_625DCB
0x625DC6: call    sub_6B74B0
0x625DCB: mov     edi, [esp+20h+arg_4]
0x625DCF: fldz
0x625DD1: mov     eax, [esp+20h+arg_8]
0x625DD5: fstp    dword ptr [esi+44h]
0x625DD8: mov     [esi+60h], eax
0x625DDB: mov     [esi+54h], ebx
0x625DDE: mov     [esi+58h], ebx
0x625DE1: mov     [esi+5Ch], edi
0x625DE4: mov     edx, [edi]
0x625DE6: mov     eax, [edx+17Ch]
0x625DEC: push    ebx
0x625DED: mov     ecx, edi
0x625DEF: call    eax
0x625DF1: mov     [esi+3Ch], ebx
0x625DF4: mov     [esi+40h], ebx
0x625DF7: mov     [esi+48h], ebx
0x625DFA: mov     ecx, ds:0B333C4h
0x625E00: push    ebx
0x625E01: push    ecx
0x625E02: mov     ecx, edi
0x625E04: call    TesObjectREF_GetDistance
0x625E09: fstp    [esp+20h+arg_0]
0x625E0D: fld     [esp+20h+arg_0]
0x625E11: fcomp   qword ptr ds:0A6E6F8h
0x625E17: fnstsw  ax
0x625E19: test    ah, 5
0x625E1C: jp      short loc_625E53
0x625E1E: mov     eax, ds:0B333C4h
0x625E23: cmp     [eax+118h], ebx
0x625E29: jz      short loc_625E4D
0x625E2B: mov     edx, [eax+118h]
0x625E31: mov     ecx, [edx+60h]
0x625E34: push    ebx
0x625E35: push    eax
0x625E36: call    TesObjectREF_GetDistance
0x625E3B: fld     [esp+20h+arg_0]
0x625E3F: fcompp
0x625E41: fnstsw  ax
0x625E43: test    ah, 5
0x625E46: jp      short loc_625E53
0x625E48: mov     eax, ds:0B333C4h
0x625E4D: mov     [eax+118h], esi
0x625E53: mov     [esi+4Ch], bl
0x625E56: mov     eax, esi
0x625E58: mov     ecx, dword ptr [esp+20h+var_C]
0x625E5C: mov     large fs:0, ecx
0x625E63: pop     ecx
0x625E64: pop     edi
0x625E65: pop     esi
0x625E66: pop     ebx
0x625E67: add     esp, 10h
0x625E6A: retn    0Ch
