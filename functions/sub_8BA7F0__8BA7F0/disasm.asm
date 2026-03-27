0x8BA7F0: push    0FFFFFFFFh
0x8BA7F2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x8BA7F7: mov     eax, large fs:0
0x8BA7FD: push    eax
0x8BA7FE: push    ecx
0x8BA7FF: push    ebx
0x8BA800: push    ebp
0x8BA801: push    esi
0x8BA802: push    edi
0x8BA803: mov     eax, ds:0B30AACh
0x8BA808: xor     eax, esp
0x8BA80A: push    eax
0x8BA80B: lea     eax, [esp+24h+var_C]
0x8BA80F: mov     large fs:0, eax
0x8BA815: mov     edi, ecx
0x8BA817: push    offset stru_BA7C80; lpCriticalSection
0x8BA81C: call    dword ptr ds:0A2806Ch
0x8BA822: call    dword ptr ds:0A2808Ch
0x8BA828: mov     ebp, 1
0x8BA82D: add     ds:0BA7CFCh, ebp
0x8BA833: push    14h; Size
0x8BA835: mov     ds:0BA7CF8h, eax
0x8BA83A: call    FormHeapAlloc
0x8BA83F: mov     esi, eax
0x8BA841: add     esp, 4
0x8BA844: mov     [esp+24h+var_10], esi
0x8BA848: xor     ebx, ebx
0x8BA84A: cmp     esi, ebx
0x8BA84C: mov     [esp+24h+var_4], ebx
0x8BA850: jz      short loc_8BA888
0x8BA852: mov     ecx, esi; this
0x8BA854: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8BA859: mov     dword ptr [esi], offset ??_7bhkWorldObject@@6B@; const bhkWorldObject::`vftable'
0x8BA85F: mov     [esi+0Ch], ebx
0x8BA862: add     ds:0BA7D34h, ebp
0x8BA868: mov     dword ptr [esi], offset ??_7bhkPhantom@@6B@; const bhkPhantom::`vftable'
0x8BA86E: add     ds:0BA7F5Ch, ebp
0x8BA874: mov     [esi+10h], bl
0x8BA877: mov     dword ptr [esi], offset ??_7bhkAabbPhantom@@6B@; const bhkAabbPhantom::`vftable'
0x8BA87D: add     ds:0BA802Ch, ebp
0x8BA883: mov     [esi+10h], bl
0x8BA886: jmp     short loc_8BA88A
0x8BA888: xor     esi, esi
0x8BA88A: mov     eax, [esp+24h+arg_0]
0x8BA88E: push    eax
0x8BA88F: push    esi
0x8BA890: mov     ecx, edi
0x8BA892: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x8BA89A: call    sub_89F5D0
0x8BA89F: sub     ds:0BA7CFCh, ebp
0x8BA8A5: jnz     short loc_8BA8AD
0x8BA8A7: mov     ds:0BA7CF8h, ebx
0x8BA8AD: push    offset stru_BA7C80; lpCriticalSection
0x8BA8B2: call    dword ptr ds:0A28074h
0x8BA8B8: mov     eax, esi
0x8BA8BA: mov     ecx, [esp+24h+var_C]
0x8BA8BE: mov     large fs:0, ecx
0x8BA8C5: pop     ecx
0x8BA8C6: pop     edi
0x8BA8C7: pop     esi
0x8BA8C8: pop     ebp
0x8BA8C9: pop     ebx
0x8BA8CA: add     esp, 10h
0x8BA8CD: retn    4
