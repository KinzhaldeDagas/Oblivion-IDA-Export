0x733770: push    0FFFFFFFFh
0x733772: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x733777: mov     eax, large fs:0
0x73377D: push    eax
0x73377E: push    ecx
0x73377F: push    ebx
0x733780: push    esi
0x733781: push    edi
0x733782: mov     eax, ds:0B30AACh
0x733787: xor     eax, esp
0x733789: push    eax
0x73378A: lea     eax, [esp+20h+var_C]
0x73378E: mov     large fs:0, eax
0x733794: mov     ebx, ecx
0x733796: push    34h ; '4'; Size
0x733798: call    FormHeapAlloc
0x73379D: mov     esi, eax
0x73379F: add     esp, 4
0x7337A2: mov     [esp+20h+var_10], esi
0x7337A6: xor     edi, edi
0x7337A8: cmp     esi, edi
0x7337AA: mov     [esp+20h+var_4], edi
0x7337AE: jz      short loc_7337DE
0x7337B0: mov     ecx, esi
0x7337B2: call    NiAccumulator_Constructor
0x7337B7: mov     dword ptr [esi], offset ??_7NiBackToFrontAccumulator@@6B@; const NiBackToFrontAccumulator::`vftable'
0x7337BD: mov     [esi+18h], edi
0x7337C0: mov     [esi+10h], edi
0x7337C3: mov     [esi+14h], edi
0x7337C6: mov     dword ptr [esi+0Ch], offset ??_7?$NiTPointerList@PAVNiGeometry@@@@6B@; const NiTPointerList<NiGeometry *>::`vftable'
0x7337CD: mov     [esi+1Ch], edi
0x7337D0: mov     [esi+20h], edi
0x7337D3: mov     [esi+24h], edi
0x7337D6: mov     [esi+28h], edi
0x7337D9: mov     [esi+2Ch], edi
0x7337DC: jmp     short loc_7337E0
0x7337DE: xor     esi, esi
0x7337E0: mov     eax, [esp+20h+arg_0]
0x7337E4: push    eax
0x7337E5: push    esi
0x7337E6: mov     ecx, ebx
0x7337E8: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7337F0: call    sub_733850
0x7337F5: mov     eax, esi
0x7337F7: mov     ecx, [esp+20h+var_C]
0x7337FB: mov     large fs:0, ecx
0x733802: pop     ecx
0x733803: pop     edi
0x733804: pop     esi
0x733805: pop     ebx
0x733806: add     esp, 10h
0x733809: retn    4
