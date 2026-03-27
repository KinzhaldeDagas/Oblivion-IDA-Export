0x8B7470: push    0FFFFFFFFh
0x8B7472: push    offset SEH_8C62B0
0x8B7477: mov     eax, large fs:0
0x8B747D: push    eax
0x8B747E: push    ecx
0x8B747F: push    esi
0x8B7480: mov     eax, ds:0B30AACh
0x8B7485: xor     eax, esp
0x8B7487: push    eax
0x8B7488: lea     eax, [esp+18h+var_C]
0x8B748C: mov     large fs:0, eax
0x8B7492: push    14h; Size
0x8B7494: call    FormHeapAlloc
0x8B7499: mov     esi, eax
0x8B749B: add     esp, 4
0x8B749E: mov     [esp+18h+var_10], esi
0x8B74A2: test    esi, esi
0x8B74A4: mov     [esp+18h+var_4], 0
0x8B74AC: jz      short loc_8B74FF
0x8B74AE: mov     ecx, esi; this
0x8B74B0: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8B74B5: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8B74BB: mov     eax, 1
0x8B74C0: mov     dword ptr [esi+0Ch], 0
0x8B74C7: mov     dword ptr [esi+10h], 0
0x8B74CE: add     ds:0BA7D70h, eax
0x8B74D4: mov     dword ptr [esi], offset ??_7bhkSphereRepShape@@6B@; const bhkSphereRepShape::`vftable'
0x8B74DA: add     ds:0BA7F44h, eax
0x8B74E0: mov     dword ptr [esi], offset ??_7bhkMultiSphereShape@@6B@; const bhkMultiSphereShape::`vftable'
0x8B74E6: add     ds:0BA7FE8h, eax
0x8B74EC: mov     eax, esi
0x8B74EE: mov     ecx, [esp+18h+var_C]
0x8B74F2: mov     large fs:0, ecx
0x8B74F9: pop     ecx
0x8B74FA: pop     esi
0x8B74FB: add     esp, 10h
0x8B74FE: retn
0x8B74FF: xor     eax, eax
0x8B7501: mov     ecx, [esp+18h+var_C]
0x8B7505: mov     large fs:0, ecx
0x8B750C: pop     ecx
0x8B750D: pop     esi
0x8B750E: add     esp, 10h
0x8B7511: retn
