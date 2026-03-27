0x693880: push    0FFFFFFFFh
0x693882: push    offset SEH_8C62B0
0x693887: mov     eax, large fs:0
0x69388D: push    eax
0x69388E: push    ecx
0x69388F: push    esi
0x693890: mov     eax, ds:0B30AACh
0x693895: xor     eax, esp
0x693897: push    eax
0x693898: lea     eax, [esp+18h+var_C]
0x69389C: mov     large fs:0, eax
0x6938A2: push    38h ; '8'; Size
0x6938A4: call    FormHeapAlloc
0x6938A9: mov     esi, eax
0x6938AB: add     esp, 4
0x6938AE: mov     [esp+18h+var_10], esi
0x6938B2: xor     eax, eax
0x6938B4: cmp     esi, eax
0x6938B6: mov     [esp+18h+var_4], eax
0x6938BA: jz      short loc_6938DA
0x6938BC: mov     eax, [esp+18h+arg_8]
0x6938C0: mov     ecx, [esp+18h+arg_4]
0x6938C4: mov     edx, [esp+18h+arg_0]
0x6938C8: push    eax
0x6938C9: push    ecx
0x6938CA: push    edx
0x6938CB: mov     ecx, esi; this
0x6938CD: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x6938D2: mov     dword ptr [esi], offset ??_7DisintegrateWeaponEffect@@6B@; const DisintegrateWeaponEffect::`vftable'
0x6938D8: mov     eax, esi
0x6938DA: mov     ecx, [esp+18h+var_C]
0x6938DE: mov     large fs:0, ecx
0x6938E5: pop     ecx
0x6938E6: pop     esi
0x6938E7: add     esp, 10h
0x6938EA: retn
