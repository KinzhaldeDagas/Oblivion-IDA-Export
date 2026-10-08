0x7A5AA0: push    ecx; Typed uninitialized-fill wrapper returning destination+count. Its former noreturn boundary omitted the real arithmetic epilogue.
0x7A5AA1: mov     edx, [esp+4+value]
0x7A5AA5: push    esi
0x7A5AA6: mov     esi, [esp+8+count]
0x7A5AAA: push    edi
0x7A5AAB: mov     edi, [esp+0Ch+destination]
0x7A5AAF: mov     byte ptr [esp+0Ch+var_4], 0
0x7A5AB4: mov     eax, [esp+0Ch+var_4]
0x7A5AB8: push    eax
0x7A5AB9: mov     eax, [esp+10h+value]
0x7A5ABD: push    edx
0x7A5ABE: push    ecx
0x7A5ABF: push    eax; value
0x7A5AC0: push    esi; count
0x7A5AC1: push    edi; destination
0x7A5AC2: call    OB_SIdvLeafTexture_UninitializedFillN_010201A0; Exception-safe uninitialized fill of count compact leaf textures. The normal path returns; the SEH landing path destroys the constructed prefix and rethrows.
0x7A5AC7: mov     eax, esi; Restored normal fill-wrapper epilogue: compute destination + count*0x54 and return with retn 0x0C.
0x7A5AC9: imul    eax, 54h ; 'T'
0x7A5ACC: add     esp, 18h
0x7A5ACF: add     eax, edi
0x7A5AD1: pop     edi
0x7A5AD2: pop     esi
0x7A5AD3: pop     ecx
0x7A5AD4: retn    0Ch
