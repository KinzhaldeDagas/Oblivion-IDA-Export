0x6A4580: push    0FFFFFFFFh
0x6A4582: push    offset ??0ScriptEffect@@QAE@XZ_SEH
0x6A4587: mov     eax, large fs:0
0x6A458D: push    eax
0x6A458E: push    ecx
0x6A458F: push    esi
0x6A4590: push    edi
0x6A4591: mov     eax, ds:0B30AACh
0x6A4596: xor     eax, esp
0x6A4598: push    eax
0x6A4599: lea     eax, [esp+1Ch+var_C]
0x6A459D: mov     large fs:0, eax
0x6A45A3: mov     esi, ecx
0x6A45A5: mov     [esp+1Ch+var_10], esi
0x6A45A9: mov     dword ptr [esi], offset ??_7ScriptEffect@@6B@; const ScriptEffect::`vftable'
0x6A45AF: mov     edi, [esi+3Ch]
0x6A45B2: test    edi, edi
0x6A45B4: mov     [esp+1Ch+var_4], 0
0x6A45BC: jz      short loc_6A45CE
0x6A45BE: mov     ecx, edi
0x6A45C0: call    ScriptEventList_destr??
0x6A45C5: push    edi
0x6A45C6: call    FormHeapFree
0x6A45CB: add     esp, 4
0x6A45CE: mov     ecx, esi; this
0x6A45D0: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6A45D8: call    ??1ActiveEffect@@UAE@XZ; ActiveEffect::~ActiveEffect(void)
0x6A45DD: mov     ecx, [esp+1Ch+var_C]
0x6A45E1: mov     large fs:0, ecx
0x6A45E8: pop     ecx
0x6A45E9: pop     edi
0x6A45EA: pop     esi
0x6A45EB: add     esp, 10h
0x6A45EE: retn
