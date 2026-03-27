0x89FC90: push    0FFFFFFFFh
0x89FC92: push    offset ??1bhkBinaryAction@@UAE@XZ_SEH
0x89FC97: mov     eax, large fs:0
0x89FC9D: push    eax
0x89FC9E: push    ecx
0x89FC9F: push    esi
0x89FCA0: mov     eax, ds:0B30AACh
0x89FCA5: xor     eax, esp
0x89FCA7: push    eax
0x89FCA8: lea     eax, [esp+18h+var_C]
0x89FCAC: mov     large fs:0, eax
0x89FCB2: mov     esi, ecx
0x89FCB4: mov     [esp+18h+var_10], esi
0x89FCB8: mov     dword ptr [esi], offset ??_7bhkBinaryAction@@6B@; const bhkBinaryAction::`vftable'
0x89FCBE: mov     [esp+18h+var_4], 0
0x89FCC6: call    sub_89D700
0x89FCCB: sub     dword ptr ds:0BA7D40h, 1
0x89FCD2: mov     ecx, esi; this
0x89FCD4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x89FCDC: call    ??1bhkAction@@UAE@XZ; bhkAction::~bhkAction(void)
0x89FCE1: mov     ecx, [esp+18h+var_C]
0x89FCE5: mov     large fs:0, ecx
0x89FCEC: pop     ecx
0x89FCED: pop     esi
0x89FCEE: add     esp, 10h
0x89FCF1: retn
