0x8C5160: push    0FFFFFFFFh
0x8C5162: push    offset SEH_8C62B0
0x8C5167: mov     eax, large fs:0
0x8C516D: push    eax
0x8C516E: push    ecx
0x8C516F: push    esi
0x8C5170: mov     eax, ds:0B30AACh
0x8C5175: xor     eax, esp
0x8C5177: push    eax
0x8C5178: lea     eax, [esp+18h+var_C]
0x8C517C: mov     large fs:0, eax
0x8C5182: push    14h; Size
0x8C5184: call    FormHeapAlloc
0x8C5189: mov     esi, eax
0x8C518B: add     esp, 4
0x8C518E: mov     [esp+18h+var_10], esi
0x8C5192: test    esi, esi
0x8C5194: mov     [esp+18h+var_4], 0
0x8C519C: jz      short loc_8C51EF
0x8C519E: mov     ecx, esi; this
0x8C51A0: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C51A5: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8C51AB: mov     eax, 1
0x8C51B0: mov     dword ptr [esi+0Ch], 0
0x8C51B7: mov     dword ptr [esi+10h], 0
0x8C51BE: add     ds:0BA7D70h, eax
0x8C51C4: mov     dword ptr [esi], offset ??_7bhkShapeCollection@@6B@; const bhkShapeCollection::`vftable'
0x8C51CA: add     ds:0BA816Ch, eax
0x8C51D0: mov     dword ptr [esi], offset ??_7bhkPackedNiTriStripsShape@@6B@; const bhkPackedNiTriStripsShape::`vftable'
0x8C51D6: add     ds:0BA8120h, eax
0x8C51DC: mov     eax, esi
0x8C51DE: mov     ecx, [esp+18h+var_C]
0x8C51E2: mov     large fs:0, ecx
0x8C51E9: pop     ecx
0x8C51EA: pop     esi
0x8C51EB: add     esp, 10h
0x8C51EE: retn
0x8C51EF: xor     eax, eax
0x8C51F1: mov     ecx, [esp+18h+var_C]
0x8C51F5: mov     large fs:0, ecx
0x8C51FC: pop     ecx
0x8C51FD: pop     esi
0x8C51FE: add     esp, 10h
0x8C5201: retn
