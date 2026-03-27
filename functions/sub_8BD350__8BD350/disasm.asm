0x8BD350: push    0FFFFFFFFh
0x8BD352: push    offset SEH_8C8900
0x8BD357: mov     eax, large fs:0
0x8BD35D: push    eax
0x8BD35E: push    ecx
0x8BD35F: mov     eax, ds:0B30AACh
0x8BD364: xor     eax, esp
0x8BD366: push    eax
0x8BD367: lea     eax, [esp+14h+var_C]
0x8BD36B: mov     large fs:0, eax
0x8BD371: push    14h; Size
0x8BD373: call    FormHeapAlloc
0x8BD378: add     esp, 4
0x8BD37B: mov     [esp+14h+var_10], eax
0x8BD37F: test    eax, eax
0x8BD381: mov     [esp+14h+var_4], 0
0x8BD389: jz      short loc_8BD3A2
0x8BD38B: mov     ecx, eax; this
0x8BD38D: call    ??0bhkCachingShapePhantom@@QAE@XZ; bhkCachingShapePhantom::bhkCachingShapePhantom(void)
0x8BD392: mov     ecx, [esp+14h+var_C]
0x8BD396: mov     large fs:0, ecx
0x8BD39D: pop     ecx
0x8BD39E: add     esp, 10h
0x8BD3A1: retn
0x8BD3A2: xor     eax, eax
0x8BD3A4: mov     ecx, [esp+14h+var_C]
0x8BD3A8: mov     large fs:0, ecx
0x8BD3AF: pop     ecx
0x8BD3B0: add     esp, 10h
0x8BD3B3: retn
