0x6A67E0: push    0FFFFFFFFh
0x6A67E2: push    offset SEH_8C8970
0x6A67E7: mov     eax, large fs:0
0x6A67ED: push    eax
0x6A67EE: push    ecx
0x6A67EF: push    esi
0x6A67F0: push    edi
0x6A67F1: mov     eax, ds:0B30AACh
0x6A67F6: xor     eax, esp
0x6A67F8: push    eax
0x6A67F9: lea     eax, [esp+1Ch+var_C]
0x6A67FD: mov     large fs:0, eax
0x6A6803: mov     edi, ecx
0x6A6805: push    40h ; '@'; Size
0x6A6807: call    FormHeapAlloc
0x6A680C: mov     esi, eax
0x6A680E: add     esp, 4
0x6A6811: mov     [esp+1Ch+var_10], esi
0x6A6815: test    esi, esi
0x6A6817: mov     [esp+1Ch+var_4], 0
0x6A681F: jz      short loc_6A6849
0x6A6821: mov     eax, [edi+0Ch]
0x6A6824: mov     ecx, [edi+8]
0x6A6827: mov     edx, [edi+24h]
0x6A682A: push    eax
0x6A682B: push    ecx
0x6A682C: push    edx
0x6A682D: mov     ecx, esi; this
0x6A682F: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x6A6834: fldz
0x6A6836: fstp    dword ptr [esi+38h]
0x6A6839: mov     dword ptr [esi], offset ??_7SunDamageEffect@@6B@; const SunDamageEffect::`vftable'
0x6A683F: mov     byte ptr [esi+3Dh], 0
0x6A6843: mov     byte ptr [esi+3Ch], 0
0x6A6847: jmp     short loc_6A684B
0x6A6849: xor     esi, esi
0x6A684B: mov     eax, [edi]
0x6A684D: mov     edx, [eax+2Ch]
0x6A6850: push    esi
0x6A6851: mov     ecx, edi
0x6A6853: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6A685B: call    edx
0x6A685D: fld     dword ptr [edi+38h]
0x6A6860: fstp    dword ptr [esi+38h]
0x6A6863: mov     al, [edi+3Ch]
0x6A6866: mov     [esi+3Ch], al
0x6A6869: mov     cl, [edi+3Dh]
0x6A686C: mov     [esi+3Dh], cl
0x6A686F: mov     eax, esi
0x6A6871: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6A6875: mov     large fs:0, ecx
0x6A687C: pop     ecx
0x6A687D: pop     edi
0x6A687E: pop     esi
0x6A687F: add     esp, 10h
0x6A6882: retn
