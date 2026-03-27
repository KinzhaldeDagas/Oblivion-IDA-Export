0x71EA60: push    0FFFFFFFFh
0x71EA62: push    offset SEH_71EA60
0x71EA67: mov     eax, large fs:0
0x71EA6D: push    eax
0x71EA6E: sub     esp, 3Ch
0x71EA71: push    ebx
0x71EA72: push    ebp
0x71EA73: push    esi
0x71EA74: push    edi
0x71EA75: mov     eax, ds:0B30AACh
0x71EA7A: xor     eax, esp
0x71EA7C: push    eax
0x71EA7D: lea     eax, [esp+5Ch+var_C]
0x71EA81: mov     large fs:0, eax
0x71EA87: mov     esi, [esp+5Ch+arg_4]
0x71EA8B: mov     edi, [esp+5Ch+arg_0]
0x71EA8F: mov     eax, [esi+54h]
0x71EA92: mov     eax, [eax]
0x71EA94: mov     ecx, [edi+54h]
0x71EA97: cmp     eax, [ecx]
0x71EA99: lea     ebx, [esi+8]
0x71EA9C: jnz     loc_71F484
0x71EAA2: mov     edx, [esi+58h]
0x71EAA5: mov     eax, [edx]
0x71EAA7: mov     ecx, [edi+58h]
0x71EAAA: cmp     eax, [ecx]
0x71EAAC: jnz     loc_71F484
0x71EAB2: mov     eax, [esi+6Ch]
0x71EAB5: cmp     eax, [edi+6Ch]
0x71EAB8: mov     [esp+5Ch+arg_0], eax
0x71EABC: jnz     loc_71F484
0x71EAC2: mov     ebp, [esp+5Ch+Size]
0x71EAC6: cmp     ebp, 0FFFFFFFFh
0x71EAC9: jnz     short loc_71EAE6
0x71EACB: mov     eax, [esi+60h]
0x71EACE: mov     ebp, [edi+60h]
0x71EAD1: cmp     eax, ebp
0x71EAD3: jb      loc_71F484
0x71EAD9: mov     [esp+5Ch+var_48], 0
0x71EAE1: add     ebp, 0FFFFFFFFh
0x71EAE4: jmp     short loc_71EAFC
0x71EAE6: cmp     ebp, [esi+60h]
0x71EAE9: jnb     loc_71F484
0x71EAEF: cmp     ebp, [edi+60h]
0x71EAF2: jnb     loc_71F484
0x71EAF8: mov     [esp+5Ch+var_48], ebp
0x71EAFC: lea     eax, [edi+8]
0x71EAFF: push    eax
0x71EB00: mov     ecx, ebx
0x71EB02: call    sub_71AD40
0x71EB07: test    al, al
0x71EB09: jz      loc_71EBE8
0x71EB0F: cmp     [esp+5Ch+arg_0], 0
0x71EB14: mov     [esp+5Ch+arg_4], 0
0x71EB1C: jbe     short loc_71EB8D
0x71EB1E: mov     edi, edi
0x71EB20: mov     ebx, [esp+5Ch+var_48]
0x71EB24: cmp     ebx, ebp
0x71EB26: ja      short loc_71EB7C
0x71EB28: jmp     short loc_71EB30
0x71EB2A: align 10h
0x71EB30: mov     ecx, [esi+5Ch]
0x71EB33: mov     eax, [ecx+ebx*4+4]
0x71EB37: sub     eax, [ecx+ebx*4]
0x71EB3A: mov     edx, [esi+60h]
0x71EB3D: mov     [esp+5Ch+Size], eax
0x71EB41: mov     eax, [ecx+edx*4]
0x71EB44: imul    eax, [esp+5Ch+arg_4]
0x71EB49: add     eax, [ecx+ebx*4]
0x71EB4C: mov     edx, [edi+60h]
0x71EB4F: mov     ecx, [edi+5Ch]
0x71EB52: mov     ecx, [ecx+edx*4]
0x71EB55: imul    ecx, [esp+5Ch+arg_4]
0x71EB5A: mov     edx, [edi+5Ch]
0x71EB5D: add     ecx, [edx+ebx*4]
0x71EB60: mov     edx, [esp+5Ch+Size]
0x71EB64: add     eax, [esi+50h]
0x71EB67: add     ecx, [edi+50h]
0x71EB6A: push    edx; Size
0x71EB6B: push    eax; Src
0x71EB6C: push    ecx; Dst
0x71EB6D: call    _memcpy
0x71EB72: add     ebx, 1
0x71EB75: add     esp, 0Ch
0x71EB78: cmp     ebx, ebp
0x71EB7A: jbe     short loc_71EB30
0x71EB7C: mov     eax, [esp+5Ch+arg_4]
0x71EB80: add     eax, 1
0x71EB83: cmp     eax, [esp+5Ch+arg_0]
0x71EB87: mov     [esp+5Ch+arg_4], eax
0x71EB8B: jb      short loc_71EB20
0x71EB8D: mov     eax, [esi+4Ch]
0x71EB90: test    eax, eax
0x71EB92: jz      short loc_71EBE1
0x71EB94: mov     ecx, [edi+4Ch]
0x71EB97: test    ecx, ecx
0x71EB99: jnz     short loc_71EBDB
0x71EB9B: push    24h ; '$'; Size
0x71EB9D: call    FormHeapAlloc
0x71EBA2: add     esp, 4
0x71EBA5: mov     [esp+5Ch+arg_4], eax
0x71EBA9: test    eax, eax
0x71EBAB: mov     [esp+5Ch+var_4], 0
0x71EBB3: jz      short loc_71EBC2
0x71EBB5: mov     esi, [esi+4Ch]
0x71EBB8: push    esi
0x71EBB9: mov     ecx, eax
0x71EBBB: call    sub_732690
0x71EBC0: jmp     short loc_71EBC4
0x71EBC2: xor     eax, eax
0x71EBC4: push    eax
0x71EBC5: mov     ecx, edi
0x71EBC7: mov     [esp+60h+var_4], 0FFFFFFFFh
0x71EBCF: call    sub_71B140
0x71EBD4: mov     al, 1
0x71EBD6: jmp     loc_71F486
0x71EBDB: push    eax
0x71EBDC: call    sub_732480
0x71EBE1: mov     al, 1
0x71EBE3: jmp     loc_71F486
0x71EBE8: mov     ecx, [edi+0Ch]
0x71EBEB: mov     edx, [ebx+4]
0x71EBEE: lea     eax, [edi+8]
0x71EBF1: mov     [esp+5Ch+arg_4], ecx
0x71EBF5: movzx   ecx, byte ptr [eax+1]
0x71EBF9: mov     [esp+5Ch+var_40], edx
0x71EBFD: movzx   edx, byte ptr [ebx+1]
0x71EC01: mov     [esp+5Ch+Size], ecx
0x71EC05: push    eax
0x71EC06: lea     ecx, [esp+60h+var_24]
0x71EC0A: mov     [esp+60h+var_44], edx
0x71EC0E: call    sub_71B4D0
0x71EC13: push    ebx
0x71EC14: lea     ecx, [esp+60h+var_3C]
0x71EC18: call    sub_71B4D0
0x71EC1D: cmp     [esp+5Ch+arg_4], 4
0x71EC22: jz      loc_71F484
0x71EC28: mov     eax, [esp+5Ch+arg_4]
0x71EC2C: cmp     eax, 5
0x71EC2F: jz      loc_71F484
0x71EC35: cmp     eax, 6
0x71EC38: jz      loc_71F484
0x71EC3E: cmp     [esp+5Ch+Size], 18h
0x71EC43: jnz     short loc_71EC69
0x71EC45: cmp     [esp+5Ch+var_20], 0FF00h
0x71EC4D: jnz     loc_71F484
0x71EC53: mov     eax, [esp+5Ch+var_24]
0x71EC57: cmp     eax, 0FFh
0x71EC5C: jz      short loc_71EC69
0x71EC5E: cmp     eax, 0FF0000h
0x71EC63: jnz     loc_71F484
0x71EC69: push    offset unk_B25CE0
0x71EC6E: mov     ecx, ebx
0x71EC70: call    sub_71AD40
0x71EC75: test    al, al
0x71EC77: jz      loc_71EDC3
0x71EC7D: cmp     dword ptr [esi+4Ch], 0
0x71EC81: jz      loc_71F484
0x71EC87: mov     eax, [esp+5Ch+arg_4]
0x71EC8B: test    eax, eax
0x71EC8D: jz      loc_71ED97
0x71EC93: cmp     eax, 1
0x71EC96: jz      loc_71ED97
0x71EC9C: push    offset unk_B25D28
0x71ECA1: lea     ecx, [edi+8]
0x71ECA4: call    sub_71AD40
0x71ECA9: test    al, al
0x71ECAB: jz      loc_71F484
0x71ECB1: cmp     [esp+5Ch+arg_0], 0
0x71ECB6: mov     [esp+5Ch+arg_4], 0
0x71ECBE: jbe     short loc_71ED2D
0x71ECC0: mov     ebx, [esp+5Ch+var_48]
0x71ECC4: cmp     ebx, ebp
0x71ECC6: ja      short loc_71ED1C
0x71ECC8: jmp     short loc_71ECD0
0x71ECCA: align 10h
0x71ECD0: mov     ecx, [esi+5Ch]
0x71ECD3: mov     eax, [ecx+ebx*4+4]
0x71ECD7: sub     eax, [ecx+ebx*4]
0x71ECDA: mov     edx, [edi+60h]
0x71ECDD: mov     [esp+5Ch+Size], eax
0x71ECE1: mov     eax, [esi+60h]
0x71ECE4: mov     eax, [ecx+eax*4]
0x71ECE7: imul    eax, [esp+5Ch+arg_4]
0x71ECEC: add     eax, [ecx+ebx*4]
0x71ECEF: mov     ecx, [edi+5Ch]
0x71ECF2: mov     ecx, [ecx+edx*4]
0x71ECF5: imul    ecx, [esp+5Ch+arg_4]
0x71ECFA: mov     edx, [edi+5Ch]
0x71ECFD: add     ecx, [edx+ebx*4]
0x71ED00: mov     edx, [esp+5Ch+Size]
0x71ED04: add     eax, [esi+50h]
0x71ED07: add     ecx, [edi+50h]
0x71ED0A: push    edx; Size
0x71ED0B: push    eax; Src
0x71ED0C: push    ecx; Dst
0x71ED0D: call    _memcpy
0x71ED12: add     ebx, 1
0x71ED15: add     esp, 0Ch
0x71ED18: cmp     ebx, ebp
0x71ED1A: jbe     short loc_71ECD0
0x71ED1C: mov     eax, [esp+5Ch+arg_4]
0x71ED20: add     eax, 1
0x71ED23: cmp     eax, [esp+5Ch+arg_0]
0x71ED27: mov     [esp+5Ch+arg_4], eax
0x71ED2B: jb      short loc_71ECC0
0x71ED2D: mov     eax, [esi+4Ch]
0x71ED30: test    eax, eax
0x71ED32: jz      loc_71F484
0x71ED38: mov     ecx, [edi+4Ch]
0x71ED3B: test    ecx, ecx
0x71ED3D: jnz     short loc_71ED7A
0x71ED3F: push    24h ; '$'; Size
0x71ED41: call    FormHeapAlloc
0x71ED46: add     esp, 4
0x71ED49: mov     [esp+5Ch+arg_4], eax
0x71ED4D: mov     [esp+5Ch+var_4], 1
0x71ED55: test    eax, eax
0x71ED57: jz      short loc_71ED66
0x71ED59: mov     esi, [esi+4Ch]
0x71ED5C: push    esi
0x71ED5D: mov     ecx, eax
0x71ED5F: call    sub_732690
0x71ED64: jmp     short loc_71ED68
0x71ED66: xor     eax, eax
0x71ED68: push    eax
0x71ED69: mov     ecx, edi
0x71ED6B: mov     [esp+60h+var_4], 0FFFFFFFFh
0x71ED73: call    sub_71B140
0x71ED78: jmp     short loc_71ED80
0x71ED7A: push    eax
0x71ED7B: call    sub_732480
0x71ED80: mov     edi, [edi+4Ch]
0x71ED83: cmp     dword ptr [edi+0Ch], 0
0x71ED87: mov     eax, [edi+14h]
0x71ED8A: jbe     short loc_71ED90
0x71ED8C: mov     byte ptr [eax+3], 0FFh
0x71ED90: mov     al, 1
0x71ED92: jmp     loc_71F486
0x71ED97: mov     eax, [esp+5Ch+Size]
0x71ED9B: cmp     eax, 18h
0x71ED9E: jnz     short loc_71EDAD
0x71EDA0: mov     [esp+5Ch+arg_4], offset sub_71C840
0x71EDA8: jmp     loc_71F3F8
0x71EDAD: cmp     eax, 20h ; ' '
0x71EDB0: jnz     loc_71F484
0x71EDB6: mov     [esp+5Ch+arg_4], offset sub_71C5C0
0x71EDBE: jmp     loc_71F3F8
0x71EDC3: push    offset unk_B25D28
0x71EDC8: mov     ecx, ebx
0x71EDCA: call    sub_71AD40
0x71EDCF: test    al, al
0x71EDD1: jz      loc_71EF0A
0x71EDD7: cmp     dword ptr [esi+4Ch], 0
0x71EDDB: jz      loc_71F484
0x71EDE1: mov     eax, [esp+5Ch+arg_4]
0x71EDE5: test    eax, eax
0x71EDE7: jz      loc_71EEDE
0x71EDED: cmp     eax, 1
0x71EDF0: jz      loc_71EEDE
0x71EDF6: push    offset unk_B25CE0
0x71EDFB: lea     ecx, [edi+8]
0x71EDFE: call    sub_71AD40
0x71EE03: test    al, al
0x71EE05: jz      loc_71F484
0x71EE0B: cmp     [esp+5Ch+arg_0], 0
0x71EE10: mov     [esp+5Ch+arg_4], 0
0x71EE18: jbe     short loc_71EE8D
0x71EE1A: lea     ebx, [ebx+0]
0x71EE20: mov     ebx, [esp+5Ch+var_48]
0x71EE24: cmp     ebx, ebp
0x71EE26: ja      short loc_71EE7C
0x71EE28: jmp     short loc_71EE30
0x71EE2A: align 10h
0x71EE30: mov     ecx, [esi+5Ch]
0x71EE33: mov     eax, [ecx+ebx*4+4]
0x71EE37: sub     eax, [ecx+ebx*4]
0x71EE3A: mov     edx, [edi+60h]
0x71EE3D: mov     [esp+5Ch+Size], eax
0x71EE41: mov     eax, [esi+60h]
0x71EE44: mov     eax, [ecx+eax*4]
0x71EE47: imul    eax, [esp+5Ch+arg_4]
0x71EE4C: add     eax, [ecx+ebx*4]
0x71EE4F: mov     ecx, [edi+5Ch]
0x71EE52: mov     ecx, [ecx+edx*4]
0x71EE55: imul    ecx, [esp+5Ch+arg_4]
0x71EE5A: mov     edx, [edi+5Ch]
0x71EE5D: add     ecx, [edx+ebx*4]
0x71EE60: mov     edx, [esp+5Ch+Size]
0x71EE64: add     eax, [esi+50h]
0x71EE67: add     ecx, [edi+50h]
0x71EE6A: push    edx; Size
0x71EE6B: push    eax; Src
0x71EE6C: push    ecx; Dst
0x71EE6D: call    _memcpy
0x71EE72: add     ebx, 1
0x71EE75: add     esp, 0Ch
0x71EE78: cmp     ebx, ebp
0x71EE7A: jbe     short loc_71EE30
0x71EE7C: mov     eax, [esp+5Ch+arg_4]
0x71EE80: add     eax, 1
0x71EE83: cmp     eax, [esp+5Ch+arg_0]
0x71EE87: mov     [esp+5Ch+arg_4], eax
0x71EE8B: jb      short loc_71EE20
0x71EE8D: cmp     dword ptr [esi+4Ch], 0
0x71EE91: jz      loc_71F484
0x71EE97: push    24h ; '$'; Size
0x71EE99: call    FormHeapAlloc
0x71EE9E: add     esp, 4
0x71EEA1: mov     [esp+5Ch+arg_4], eax
0x71EEA5: test    eax, eax
0x71EEA7: mov     [esp+5Ch+var_4], 2
0x71EEAF: jz      short loc_71EEC5
0x71EEB1: mov     esi, [esi+4Ch]
0x71EEB4: mov     esi, [esi+14h]
0x71EEB7: push    esi; Src
0x71EEB8: push    10h; int
0x71EEBA: push    0; char
0x71EEBC: mov     ecx, eax
0x71EEBE: call    sub_732750
0x71EEC3: jmp     short loc_71EEC7
0x71EEC5: xor     eax, eax
0x71EEC7: push    eax
0x71EEC8: mov     ecx, edi
0x71EECA: mov     [esp+60h+var_4], 0FFFFFFFFh
0x71EED2: call    sub_71B140
0x71EED7: mov     al, 1
0x71EED9: jmp     loc_71F486
0x71EEDE: mov     eax, [esp+5Ch+Size]
0x71EEE2: cmp     eax, 18h
0x71EEE5: jnz     short loc_71EEF4
0x71EEE7: mov     [esp+5Ch+arg_4], offset sub_71C840
0x71EEEF: jmp     loc_71F3F8
0x71EEF4: cmp     eax, 20h ; ' '
0x71EEF7: jnz     loc_71F484
0x71EEFD: mov     [esp+5Ch+arg_4], offset sub_71C980
0x71EF05: jmp     loc_71F3F8
0x71EF0A: push    offset unk_B25D70
0x71EF0F: mov     ecx, ebx
0x71EF11: call    sub_71AD40
0x71EF16: test    al, al
0x71EF18: jz      loc_71F03C
0x71EF1E: cmp     dword ptr [esi+4Ch], 0
0x71EF22: jz      loc_71F484
0x71EF28: mov     eax, [esp+5Ch+arg_4]
0x71EF2C: test    eax, eax
0x71EF2E: jz      loc_71EFFE
0x71EF34: cmp     eax, 1
0x71EF37: jz      loc_71EFFE
0x71EF3D: push    offset unk_B25DB8
0x71EF42: lea     ecx, [edi+8]
0x71EF45: call    sub_71AD40
0x71EF4A: test    al, al
0x71EF4C: jz      loc_71F484
0x71EF52: cmp     [esp+5Ch+arg_0], 0
0x71EF57: mov     [esp+5Ch+arg_4], 0
0x71EF5F: jbe     short loc_71EFCD
0x71EF61: mov     ebx, [esp+5Ch+var_48]
0x71EF65: cmp     ebx, ebp
0x71EF67: ja      short loc_71EFBC
0x71EF69: lea     esp, [esp+0]
0x71EF70: mov     ecx, [esi+5Ch]
0x71EF73: mov     eax, [ecx+ebx*4+4]
0x71EF77: sub     eax, [ecx+ebx*4]
0x71EF7A: mov     edx, [edi+60h]
0x71EF7D: mov     [esp+5Ch+Size], eax
0x71EF81: mov     eax, [esi+60h]
0x71EF84: mov     eax, [ecx+eax*4]
0x71EF87: imul    eax, [esp+5Ch+arg_4]
0x71EF8C: add     eax, [ecx+ebx*4]
0x71EF8F: mov     ecx, [edi+5Ch]
0x71EF92: mov     ecx, [ecx+edx*4]
0x71EF95: imul    ecx, [esp+5Ch+arg_4]
0x71EF9A: mov     edx, [edi+5Ch]
0x71EF9D: add     ecx, [edx+ebx*4]
0x71EFA0: mov     edx, [esp+5Ch+Size]
0x71EFA4: add     eax, [esi+50h]
0x71EFA7: add     ecx, [edi+50h]
0x71EFAA: push    edx; Size
0x71EFAB: push    eax; Src
0x71EFAC: push    ecx; Dst
0x71EFAD: call    _memcpy
0x71EFB2: add     ebx, 1
0x71EFB5: add     esp, 0Ch
0x71EFB8: cmp     ebx, ebp
0x71EFBA: jbe     short loc_71EF70
0x71EFBC: mov     eax, [esp+5Ch+arg_4]
0x71EFC0: add     eax, 1
0x71EFC3: cmp     eax, [esp+5Ch+arg_0]
0x71EFC7: mov     [esp+5Ch+arg_4], eax
0x71EFCB: jb      short loc_71EF61
0x71EFCD: mov     eax, [esi+4Ch]
0x71EFD0: test    eax, eax
0x71EFD2: jz      loc_71F484
0x71EFD8: mov     ecx, [edi+4Ch]
0x71EFDB: test    ecx, ecx
0x71EFDD: jnz     loc_71ED7A
0x71EFE3: push    24h ; '$'; Size
0x71EFE5: call    FormHeapAlloc
0x71EFEA: add     esp, 4
0x71EFED: mov     [esp+5Ch+arg_4], eax
0x71EFF1: mov     [esp+5Ch+var_4], 3
0x71EFF9: jmp     loc_71ED55
0x71EFFE: mov     eax, [esp+5Ch+Size]
0x71F002: cmp     eax, 10h
0x71F005: jnz     short loc_71F014
0x71F007: mov     [esp+5Ch+arg_4], offset sub_71CC50
0x71F00F: jmp     loc_71F3F8
0x71F014: cmp     eax, 18h
0x71F017: jnz     short loc_71F026
0x71F019: mov     [esp+5Ch+arg_4], offset sub_71D4A0
0x71F021: jmp     loc_71F3F8
0x71F026: cmp     eax, 20h ; ' '
0x71F029: jnz     loc_71F484
0x71F02F: mov     [esp+5Ch+arg_4], offset sub_71CF40
0x71F037: jmp     loc_71F3F8
0x71F03C: push    offset unk_B25DB8
0x71F041: mov     ecx, ebx
0x71F043: call    sub_71AD40
0x71F048: test    al, al
0x71F04A: jz      loc_71F17D
0x71F050: cmp     dword ptr [esi+4Ch], 0
0x71F054: jz      loc_71F484
0x71F05A: mov     eax, [esp+5Ch+arg_4]
0x71F05E: test    eax, eax
0x71F060: jz      loc_71F13F
0x71F066: cmp     eax, 1
0x71F069: jz      loc_71F13F
0x71F06F: push    offset unk_B25D70
0x71F074: lea     ecx, [edi+8]
0x71F077: call    sub_71AD40
0x71F07C: test    al, al
0x71F07E: jz      loc_71F484
0x71F084: cmp     [esp+5Ch+arg_0], 0
0x71F089: mov     [esp+5Ch+arg_4], 0
0x71F091: jbe     short loc_71F0FD
0x71F093: mov     ebx, [esp+5Ch+var_48]
0x71F097: cmp     ebx, ebp
0x71F099: ja      short loc_71F0EC
0x71F09B: jmp     short loc_71F0A0
0x71F09D: align 10h
0x71F0A0: mov     ecx, [esi+5Ch]
0x71F0A3: mov     eax, [ecx+ebx*4+4]
0x71F0A7: sub     eax, [ecx+ebx*4]
0x71F0AA: mov     edx, [edi+60h]
0x71F0AD: mov     [esp+5Ch+Size], eax
0x71F0B1: mov     eax, [esi+60h]
0x71F0B4: mov     eax, [ecx+eax*4]
0x71F0B7: imul    eax, [esp+5Ch+arg_4]
0x71F0BC: add     eax, [ecx+ebx*4]
0x71F0BF: mov     ecx, [edi+5Ch]
0x71F0C2: mov     ecx, [ecx+edx*4]
0x71F0C5: imul    ecx, [esp+5Ch+arg_4]
0x71F0CA: mov     edx, [edi+5Ch]
0x71F0CD: add     ecx, [edx+ebx*4]
0x71F0D0: mov     edx, [esp+5Ch+Size]
0x71F0D4: add     eax, [esi+50h]
0x71F0D7: add     ecx, [edi+50h]
0x71F0DA: push    edx; Size
0x71F0DB: push    eax; Src
0x71F0DC: push    ecx; Dst
0x71F0DD: call    _memcpy
0x71F0E2: add     ebx, 1
0x71F0E5: add     esp, 0Ch
0x71F0E8: cmp     ebx, ebp
0x71F0EA: jbe     short loc_71F0A0
0x71F0EC: mov     eax, [esp+5Ch+arg_4]
0x71F0F0: add     eax, 1
0x71F0F3: cmp     eax, [esp+5Ch+arg_0]
0x71F0F7: mov     [esp+5Ch+arg_4], eax
0x71F0FB: jb      short loc_71F093
0x71F0FD: cmp     dword ptr [esi+4Ch], 0
0x71F101: jz      loc_71F484
0x71F107: push    24h ; '$'; Size
0x71F109: call    FormHeapAlloc
0x71F10E: add     esp, 4
0x71F111: mov     [esp+5Ch+arg_4], eax
0x71F115: test    eax, eax
0x71F117: mov     [esp+5Ch+var_4], 4
0x71F11F: jz      loc_71EEC5
0x71F125: mov     esi, [esi+4Ch]
0x71F128: mov     esi, [esi+14h]
0x71F12B: push    esi; Src
0x71F12C: push    100h; int
0x71F131: push    0; char
0x71F133: mov     ecx, eax
0x71F135: call    sub_732750
0x71F13A: jmp     loc_71EEC7
0x71F13F: mov     eax, [esp+5Ch+Size]
0x71F143: cmp     eax, 10h
0x71F146: jnz     short loc_71F155
0x71F148: mov     [esp+5Ch+arg_4], offset sub_71D160
0x71F150: jmp     loc_71F3F8
0x71F155: cmp     eax, 18h
0x71F158: jnz     short loc_71F167
0x71F15A: mov     [esp+5Ch+arg_4], offset sub_71D4A0
0x71F162: jmp     loc_71F3F8
0x71F167: cmp     eax, 20h ; ' '
0x71F16A: jnz     loc_71F484
0x71F170: mov     [esp+5Ch+arg_4], offset sub_71D580
0x71F178: jmp     loc_71F3F8
0x71F17D: push    offset unk_B25E48
0x71F182: mov     ecx, ebx
0x71F184: call    sub_71AD40
0x71F189: test    al, al
0x71F18B: jz      short loc_71F1DC
0x71F18D: mov     eax, [esp+5Ch+arg_4]
0x71F191: test    eax, eax
0x71F193: jz      short loc_71F19E
0x71F195: cmp     eax, 1
0x71F198: jnz     loc_71F484
0x71F19E: mov     eax, [esp+5Ch+Size]
0x71F1A2: cmp     eax, 10h
0x71F1A5: jnz     short loc_71F1B4
0x71F1A7: mov     [esp+5Ch+arg_4], offset sub_71D7F0
0x71F1AF: jmp     loc_71F3F8
0x71F1B4: cmp     eax, 18h
0x71F1B7: jnz     short loc_71F1C6
0x71F1B9: mov     [esp+5Ch+arg_4], offset sub_71D8D0
0x71F1C1: jmp     loc_71F3F8
0x71F1C6: cmp     eax, 20h ; ' '
0x71F1C9: jnz     loc_71F484
0x71F1CF: mov     [esp+5Ch+arg_4], offset sub_71D960
0x71F1D7: jmp     loc_71F3F8
0x71F1DC: push    offset unk_B25E00
0x71F1E1: mov     ecx, ebx
0x71F1E3: call    sub_71AD40
0x71F1E8: test    al, al
0x71F1EA: jz      short loc_71F23B
0x71F1EC: mov     eax, [esp+5Ch+arg_4]
0x71F1F0: test    eax, eax
0x71F1F2: jz      short loc_71F1FD
0x71F1F4: cmp     eax, 1
0x71F1F7: jnz     loc_71F484
0x71F1FD: mov     eax, [esp+5Ch+Size]
0x71F201: cmp     eax, 10h
0x71F204: jnz     short loc_71F213
0x71F206: mov     [esp+5Ch+arg_4], offset sub_71DA20
0x71F20E: jmp     loc_71F3F8
0x71F213: cmp     eax, 18h
0x71F216: jnz     short loc_71F225
0x71F218: mov     [esp+5Ch+arg_4], offset sub_71DB00
0x71F220: jmp     loc_71F3F8
0x71F225: cmp     eax, 20h ; ' '
0x71F228: jnz     loc_71F484
0x71F22E: mov     [esp+5Ch+arg_4], offset sub_71DBD0
0x71F236: jmp     loc_71F3F8
0x71F23B: push    offset unk_B25F20
0x71F240: mov     ecx, ebx
0x71F242: call    sub_71AD40
0x71F247: test    al, al
0x71F249: jz      short loc_71F289
0x71F24B: mov     eax, [esp+5Ch+arg_4]
0x71F24F: cmp     eax, 8
0x71F252: jz      short loc_71F25D
0x71F254: cmp     eax, 9
0x71F257: jnz     loc_71F484
0x71F25D: mov     eax, [esp+5Ch+Size]
0x71F261: cmp     eax, 10h
0x71F264: jnz     short loc_71F273
0x71F266: mov     [esp+5Ch+arg_4], offset sub_71E390
0x71F26E: jmp     loc_71F3F8
0x71F273: cmp     eax, 20h ; ' '
0x71F276: jnz     loc_71F484
0x71F27C: mov     [esp+5Ch+arg_4], offset sub_71E300
0x71F284: jmp     loc_71F3F8
0x71F289: push    offset unk_B25F68
0x71F28E: mov     ecx, ebx
0x71F290: call    sub_71AD40
0x71F295: test    al, al
0x71F297: jz      short loc_71F2D7
0x71F299: mov     eax, [esp+5Ch+arg_4]
0x71F29D: cmp     eax, 8
0x71F2A0: jz      short loc_71F2AB
0x71F2A2: cmp     eax, 9
0x71F2A5: jnz     loc_71F484
0x71F2AB: mov     eax, [esp+5Ch+Size]
0x71F2AF: cmp     eax, 10h
0x71F2B2: jnz     short loc_71F2C1
0x71F2B4: mov     [esp+5Ch+arg_4], offset sub_71E240
0x71F2BC: jmp     loc_71F3F8
0x71F2C1: cmp     eax, 20h ; ' '
0x71F2C4: jnz     loc_71F484
0x71F2CA: mov     [esp+5Ch+arg_4], offset sub_71E1A0
0x71F2D2: jmp     loc_71F3F8
0x71F2D7: push    offset unk_B25E90
0x71F2DC: mov     ecx, ebx
0x71F2DE: call    sub_71AD40
0x71F2E3: test    al, al
0x71F2E5: jz      short loc_71F305
0x71F2E7: push    offset unk_B25ED8
0x71F2EC: lea     ecx, [edi+8]
0x71F2EF: call    sub_71AD40
0x71F2F4: test    al, al
0x71F2F6: jz      short loc_71F305
0x71F2F8: mov     [esp+5Ch+arg_4], offset sub_71C490
0x71F300: jmp     loc_71F3F8
0x71F305: push    offset unk_B25ED8
0x71F30A: mov     ecx, ebx
0x71F30C: call    sub_71AD40
0x71F311: test    al, al
0x71F313: jz      short loc_71F333
0x71F315: push    offset unk_B25E90
0x71F31A: lea     ecx, [edi+8]
0x71F31D: call    sub_71AD40
0x71F322: test    al, al
0x71F324: jz      short loc_71F333
0x71F326: mov     [esp+5Ch+arg_4], offset sub_71C5B0
0x71F32E: jmp     loc_71F3F8
0x71F333: mov     eax, [esp+5Ch+var_40]
0x71F337: test    eax, eax
0x71F339: jz      short loc_71F344
0x71F33B: cmp     eax, 1
0x71F33E: jnz     loc_71F484
0x71F344: lea     ebx, [edi+8]
0x71F347: push    offset unk_B25E00
0x71F34C: mov     ecx, ebx
0x71F34E: call    sub_71AD40
0x71F353: test    al, al
0x71F355: jz      short loc_71F3B1
0x71F357: mov     eax, [esp+5Ch+var_44]
0x71F35B: cmp     eax, 10h
0x71F35E: jnz     short loc_71F37E
0x71F360: cmp     [esp+5Ch+var_30], 0
0x71F365: jz      short loc_71F374
0x71F367: mov     [esp+5Ch+arg_4], offset sub_71DD40
0x71F36F: jmp     loc_71F3F8
0x71F374: mov     [esp+5Ch+arg_4], offset sub_71DDF0
0x71F37C: jmp     short loc_71F3F8
0x71F37E: cmp     eax, 18h
0x71F381: jnz     short loc_71F38D
0x71F383: mov     [esp+5Ch+arg_4], offset sub_71DF10
0x71F38B: jmp     short loc_71F3F8
0x71F38D: cmp     eax, 20h ; ' '
0x71F390: jnz     loc_71F484
0x71F396: cmp     [esp+5Ch+var_30], 0
0x71F39B: jz      short loc_71F3A7
0x71F39D: mov     [esp+5Ch+arg_4], offset sub_71E060
0x71F3A5: jmp     short loc_71F3F8
0x71F3A7: mov     [esp+5Ch+arg_4], offset sub_71E110
0x71F3AF: jmp     short loc_71F3F8
0x71F3B1: push    offset unk_B25E48
0x71F3B6: mov     ecx, ebx
0x71F3B8: call    sub_71AD40
0x71F3BD: test    al, al
0x71F3BF: jz      loc_71F484
0x71F3C5: mov     eax, [esp+5Ch+var_44]
0x71F3C9: cmp     eax, 10h
0x71F3CC: jnz     short loc_71F3D8
0x71F3CE: mov     [esp+5Ch+arg_4], offset sub_71DCB0
0x71F3D6: jmp     short loc_71F3F8
0x71F3D8: cmp     eax, 18h
0x71F3DB: jnz     short loc_71F3E7
0x71F3DD: mov     [esp+5Ch+arg_4], offset sub_71DE80
0x71F3E5: jmp     short loc_71F3F8
0x71F3E7: cmp     eax, 20h ; ' '
0x71F3EA: jnz     loc_71F484
0x71F3F0: mov     [esp+5Ch+arg_4], offset sub_71DFE0
0x71F3F8: cmp     [esp+5Ch+arg_0], 0
0x71F3FD: mov     [esp+5Ch+Size], 0
0x71F405: jbe     short loc_71F480
0x71F407: mov     ebx, [esp+5Ch+var_48]
0x71F40B: cmp     ebx, ebp
0x71F40D: ja      short loc_71F46F
0x71F40F: nop
0x71F410: mov     ecx, [esi+5Ch]
0x71F413: mov     eax, [edi+5Ch]
0x71F416: lea     edx, [esp+5Ch+var_3C]
0x71F41A: push    edx
0x71F41B: mov     edx, [esi+60h]
0x71F41E: mov     edx, [ecx+edx*4]
0x71F421: imul    edx, [esp+60h+Size]
0x71F426: add     edx, [ecx+ebx*4]
0x71F429: lea     ecx, [esp+60h+var_24]
0x71F42D: add     edx, [esi+50h]
0x71F430: push    edx
0x71F431: mov     edx, [esi+4Ch]
0x71F434: push    ecx
0x71F435: mov     ecx, [edi+60h]
0x71F438: push    edx
0x71F439: mov     edx, [eax+ecx*4]
0x71F43C: imul    edx, [esp+6Ch+Size]
0x71F441: add     edx, [eax+ebx*4]
0x71F444: mov     ecx, [eax+ebx*4+4]
0x71F448: add     edx, [edi+50h]
0x71F44B: sub     ecx, [eax+ebx*4]
0x71F44E: push    edx
0x71F44F: mov     edx, [edi+58h]
0x71F452: mov     eax, [edx+ebx*4]
0x71F455: push    ecx
0x71F456: mov     ecx, [edi+54h]
0x71F459: mov     edx, [ecx+ebx*4]
0x71F45C: push    eax
0x71F45D: push    edx
0x71F45E: call    [esp+7Ch+arg_4]
0x71F465: add     ebx, 1
0x71F468: add     esp, 20h
0x71F46B: cmp     ebx, ebp
0x71F46D: jbe     short loc_71F410
0x71F46F: mov     eax, [esp+5Ch+Size]
0x71F473: add     eax, 1
0x71F476: cmp     eax, [esp+5Ch+arg_0]
0x71F47A: mov     [esp+5Ch+Size], eax
0x71F47E: jb      short loc_71F407
0x71F480: mov     al, 1
0x71F482: jmp     short loc_71F486
0x71F484: xor     al, al
0x71F486: mov     ecx, [esp+5Ch+var_C]
0x71F48A: mov     large fs:0, ecx
0x71F491: pop     ecx
0x71F492: pop     edi
0x71F493: pop     esi
0x71F494: pop     ebp
0x71F495: pop     ebx
0x71F496: add     esp, 48h
0x71F499: retn    0Ch
