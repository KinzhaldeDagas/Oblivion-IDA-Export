0x8C6360: push    0FFFFFFFFh
0x8C6362: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x8C6367: mov     eax, large fs:0
0x8C636D: push    eax
0x8C636E: push    ecx
0x8C636F: push    ebx
0x8C6370: push    ebp
0x8C6371: push    esi
0x8C6372: push    edi
0x8C6373: mov     eax, ds:0B30AACh
0x8C6378: xor     eax, esp
0x8C637A: push    eax
0x8C637B: lea     eax, [esp+24h+var_C]
0x8C637F: mov     large fs:0, eax
0x8C6385: mov     edi, ecx
0x8C6387: push    offset stru_BA7C80; lpCriticalSection
0x8C638C: call    dword ptr ds:0A2806Ch
0x8C6392: call    dword ptr ds:0A2808Ch
0x8C6398: mov     ebp, 1
0x8C639D: add     ds:0BA7CFCh, ebp
0x8C63A3: push    14h; Size
0x8C63A5: mov     ds:0BA7CF8h, eax
0x8C63AA: call    FormHeapAlloc
0x8C63AF: mov     esi, eax
0x8C63B1: add     esp, 4
0x8C63B4: mov     [esp+24h+var_10], esi
0x8C63B8: xor     ebx, ebx
0x8C63BA: cmp     esi, ebx
0x8C63BC: mov     [esp+24h+var_4], ebx
0x8C63C0: jz      short loc_8C63F5
0x8C63C2: mov     ecx, esi; this
0x8C63C4: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C63C9: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8C63CF: mov     [esi+0Ch], ebx
0x8C63D2: mov     [esi+10h], ebx
0x8C63D5: add     ds:0BA7D70h, ebp
0x8C63DB: mov     dword ptr [esi], offset ??_7bhkShapeCollection@@6B@; const bhkShapeCollection::`vftable'
0x8C63E1: add     ds:0BA816Ch, ebp
0x8C63E7: mov     dword ptr [esi], offset ??_7bhkNiTriStripsShape@@6B@; const bhkNiTriStripsShape::`vftable'
0x8C63ED: add     ds:0BA812Ch, ebp
0x8C63F3: jmp     short loc_8C63F7
0x8C63F5: xor     esi, esi
0x8C63F7: mov     ecx, [esp+24h+arg_0]
0x8C63FB: mov     eax, [edi]
0x8C63FD: mov     edx, [eax+80h]
0x8C6403: push    ecx
0x8C6404: push    esi
0x8C6405: mov     ecx, edi
0x8C6407: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x8C640F: call    edx
0x8C6411: sub     ds:0BA7CFCh, ebp
0x8C6417: jnz     short loc_8C641F
0x8C6419: mov     ds:0BA7CF8h, ebx
0x8C641F: push    offset stru_BA7C80; lpCriticalSection
0x8C6424: call    dword ptr ds:0A28074h
0x8C642A: mov     eax, esi
0x8C642C: mov     ecx, dword ptr [esp+24h+var_C]
0x8C6430: mov     large fs:0, ecx
0x8C6437: pop     ecx
0x8C6438: pop     edi
0x8C6439: pop     esi
0x8C643A: pop     ebp
0x8C643B: pop     ebx
0x8C643C: add     esp, 10h
0x8C643F: retn    4
