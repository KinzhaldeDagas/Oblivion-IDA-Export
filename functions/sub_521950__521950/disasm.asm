0x521950: push    esi
0x521951: mov     esi, ecx
0x521953: xor     ecx, ecx
0x521955: mov     eax, 25h ; '%'
0x52195A: mov     [esi+4], eax
0x52195D: mov     edx, 4
0x521962: mul     edx
0x521964: seto    cl
0x521967: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAUIDLE_ANIM_ROOT@@@@PBDPAUIDLE_ANIM_ROOT@@@@6B@; const NiTMapBase<DFALL<IDLE_ANIM_ROOT *>,char const *,IDLE_ANIM_ROOT *>::`vftable'
0x52196D: mov     dword ptr [esi+0Ch], 0
0x521974: neg     ecx
0x521976: or      ecx, eax
0x521978: push    ecx; Size
0x521979: call    FormHeapAlloc
0x52197E: mov     ecx, [esi+4]
0x521981: add     ecx, ecx
0x521983: add     ecx, ecx
0x521985: push    ecx
0x521986: push    0
0x521988: push    eax
0x521989: mov     [esi+8], eax
0x52198C: call    __memset
0x521991: add     esp, 10h
0x521994: mov     byte ptr [esi+10h], 1
0x521998: mov     dword ptr [esi], offset ??_7?$BSTCaseInsensitiveStringMap@PAUIDLE_ANIM_ROOT@@@@6B@; const BSTCaseInsensitiveStringMap<IDLE_ANIM_ROOT *>::`vftable'
0x52199E: mov     eax, esi
0x5219A0: pop     esi
0x5219A1: retn
