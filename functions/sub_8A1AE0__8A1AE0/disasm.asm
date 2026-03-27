0x8A1AE0: cmp     [esp+arg_0], 0
0x8A1AE5: push    edi
0x8A1AE6: mov     edi, ecx
0x8A1AE8: jz      short loc_8A1B0A
0x8A1AEA: push    esi
0x8A1AEB: mov     esi, [edi+0Ch]
0x8A1AEE: test    esi, esi
0x8A1AF0: jz      short loc_8A1B02
0x8A1AF2: mov     ecx, esi
0x8A1AF4: call    sub_893510
0x8A1AF9: push    esi
0x8A1AFA: call    FormHeapFree
0x8A1AFF: add     esp, 4
0x8A1B02: mov     dword ptr [edi+0Ch], 0
0x8A1B09: pop     esi
0x8A1B0A: pop     edi
0x8A1B0B: retn    4
