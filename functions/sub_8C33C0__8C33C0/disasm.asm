0x8C33C0: push    0FFFFFFFFh
0x8C33C2: push    offset SEH_8C62B0
0x8C33C7: mov     eax, large fs:0
0x8C33CD: push    eax
0x8C33CE: push    ecx
0x8C33CF: push    esi
0x8C33D0: mov     eax, ds:0B30AACh
0x8C33D5: xor     eax, esp
0x8C33D7: push    eax
0x8C33D8: lea     eax, [esp+18h+var_C]
0x8C33DC: mov     large fs:0, eax
0x8C33E2: push    14h; Size
0x8C33E4: call    FormHeapAlloc
0x8C33E9: mov     esi, eax
0x8C33EB: add     esp, 4
0x8C33EE: mov     [esp+18h+var_10], esi
0x8C33F2: test    esi, esi
0x8C33F4: mov     [esp+18h+var_4], 0
0x8C33FC: jz      short loc_8C344F
0x8C33FE: mov     ecx, esi; this
0x8C3400: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C3405: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8C340B: mov     eax, 1
0x8C3410: mov     dword ptr [esi+0Ch], 0
0x8C3417: mov     dword ptr [esi+10h], 0
0x8C341E: add     ds:0BA7D70h, eax
0x8C3424: mov     dword ptr [esi], offset ??_7bhkBvTreeShape@@6B@; const bhkBvTreeShape::`vftable'
0x8C342A: add     ds:0BA7F98h, eax
0x8C3430: mov     dword ptr [esi], offset ??_7bhkMoppBvTreeShape@@6B@; const bhkMoppBvTreeShape::`vftable'
0x8C3436: add     ds:0BA80F4h, eax
0x8C343C: mov     eax, esi
0x8C343E: mov     ecx, [esp+18h+var_C]
0x8C3442: mov     large fs:0, ecx
0x8C3449: pop     ecx
0x8C344A: pop     esi
0x8C344B: add     esp, 10h
0x8C344E: retn
0x8C344F: xor     eax, eax
0x8C3451: mov     ecx, [esp+18h+var_C]
0x8C3455: mov     large fs:0, ecx
0x8C345C: pop     ecx
0x8C345D: pop     esi
0x8C345E: add     esp, 10h
0x8C3461: retn
