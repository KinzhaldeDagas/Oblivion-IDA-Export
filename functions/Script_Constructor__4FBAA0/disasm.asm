0x4FBAA0: push    0FFFFFFFFh
0x4FBAA2: push    offset Script_Constructor_SEH
0x4FBAA7: mov     eax, large fs:0
0x4FBAAD: push    eax
0x4FBAAE: push    ecx
0x4FBAAF: push    esi
0x4FBAB0: mov     eax, ds:0B30AACh
0x4FBAB5: xor     eax, esp
0x4FBAB7: push    eax
0x4FBAB8: lea     eax, [esp+18h+var_C]
0x4FBABC: mov     large fs:0, eax
0x4FBAC2: mov     esi, ecx
0x4FBAC4: mov     [esp+18h+var_10], esi
0x4FBAC8: call    TESForm_constr
0x4FBACD: fldz
0x4FBACF: xor     eax, eax
0x4FBAD1: mov     dword ptr [esi], offset ??_7Script@@6B@; const Script::`vftable'
0x4FBAD7: mov     [esi+40h], eax
0x4FBADA: mov     [esi+44h], eax
0x4FBADD: mov     [esi+48h], eax
0x4FBAE0: mov     [esi+4Ch], eax
0x4FBAE3: mov     [esi+18h], eax
0x4FBAE6: mov     [esi+1Ch], eax
0x4FBAE9: mov     [esi+20h], eax
0x4FBAEC: mov     [esi+24h], eax
0x4FBAEF: mov     [esi+28h], eax
0x4FBAF2: mov     [esi+30h], eax
0x4FBAF5: mov     [esi+2Ch], eax
0x4FBAF8: mov     ds:0B361ACh, al
0x4FBAFD: fst     dword ptr [esi+34h]
0x4FBB00: fst     dword ptr [esi+38h]
0x4FBB03: mov     ecx, esi; this
0x4FBB05: fstp    dword ptr [esi+3Ch]
0x4FBB08: mov     [esp+18h+var_4], eax
0x4FBB0C: mov     byte ptr [esi+4], 0Dh
0x4FBB10: call    j_TESForm_InitializeComponents
0x4FBB15: mov     eax, esi
0x4FBB17: mov     ecx, [esp+18h+var_C]
0x4FBB1B: mov     large fs:0, ecx
0x4FBB22: pop     ecx
0x4FBB23: pop     esi
0x4FBB24: add     esp, 10h
0x4FBB27: retn
