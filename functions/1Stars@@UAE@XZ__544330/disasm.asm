0x544330: push    0FFFFFFFFh
0x544332: push    offset ??1Stars@@UAE@XZ_SEH
0x544337: mov     eax, large fs:0
0x54433D: push    eax
0x54433E: push    ecx
0x54433F: push    ebp
0x544340: push    esi
0x544341: push    edi
0x544342: mov     eax, ds:0B30AACh
0x544347: xor     eax, esp
0x544349: push    eax
0x54434A: lea     eax, [esp+20h+var_C]
0x54434E: mov     large fs:0, eax
0x544354: mov     edi, ecx
0x544356: mov     [esp+20h+var_10], edi
0x54435A: mov     dword ptr [edi], offset ??_7Stars@@6B@; const Stars::`vftable'
0x544360: mov     esi, [edi+8]
0x544363: test    esi, esi
0x544365: mov     ebp, ds:0A2807Ch
0x54436B: mov     [esp+20h+var_4], 1
0x544373: jz      short loc_544394
0x544375: lea     eax, [esi+4]
0x544378: push    eax; lpAddend
0x544379: call    ebp ; InterlockedDecrement
0x54437B: test    eax, eax
0x54437D: jnz     short loc_54438D
0x54437F: test    esi, esi
0x544381: jz      short loc_54438D
0x544383: mov     edx, [esi]
0x544385: mov     eax, [edx]
0x544387: push    1
0x544389: mov     ecx, esi
0x54438B: call    eax
0x54438D: mov     dword ptr [edi+8], 0
0x544394: mov     esi, [edi+8]
0x544397: test    esi, esi
0x544399: mov     byte ptr [esp+20h+var_4], 0
0x54439E: jz      short loc_5443B8
0x5443A0: lea     ecx, [esi+4]
0x5443A3: push    ecx; lpAddend
0x5443A4: call    ebp ; InterlockedDecrement
0x5443A6: test    eax, eax
0x5443A8: jnz     short loc_5443B8
0x5443AA: test    esi, esi
0x5443AC: jz      short loc_5443B8
0x5443AE: mov     edx, [esi]
0x5443B0: mov     eax, [edx]
0x5443B2: push    1
0x5443B4: mov     ecx, esi
0x5443B6: call    eax
0x5443B8: mov     ecx, edi; this
0x5443BA: mov     [esp+20h+var_4], 0FFFFFFFFh
0x5443C2: call    ??1SkyObject@@UAE@XZ; SkyObject::~SkyObject(void)
0x5443C7: mov     ecx, [esp+20h+var_C]
0x5443CB: mov     large fs:0, ecx
0x5443D2: pop     ecx
0x5443D3: pop     edi
0x5443D4: pop     esi
0x5443D5: pop     ebp
0x5443D6: add     esp, 10h
0x5443D9: retn
