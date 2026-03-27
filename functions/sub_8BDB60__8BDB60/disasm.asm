0x8BDB60: push    ebp
0x8BDB61: mov     ebp, esp
0x8BDB63: and     esp, 0FFFFFFF0h
0x8BDB66: sub     esp, 44h
0x8BDB69: push    ebx
0x8BDB6A: push    esi
0x8BDB6B: mov     esi, [ebp+arg_0]
0x8BDB6E: push    edi
0x8BDB6F: push    esi
0x8BDB70: mov     ebx, ecx
0x8BDB72: call    sub_8A0180
0x8BDB77: mov     eax, ds:0BA805Ch
0x8BDB7C: push    eax; ArgList
0x8BDB7D: call    TESOutput_PrintString
0x8BDB82: movzx   edi, word ptr [esi+0Ah]
0x8BDB86: movzx   ecx, word ptr [esi+8]
0x8BDB8A: add     esp, 4
0x8BDB8D: cmp     edi, ecx
0x8BDB8F: mov     [esp+50h+var_44], eax
0x8BDB93: jb      short loc_8BDBA3
0x8BDB95: movzx   edx, word ptr [esi+0Eh]
0x8BDB99: add     edx, edi
0x8BDB9B: push    edx
0x8BDB9C: mov     ecx, esi
0x8BDB9E: call    NiTArray_SetSize
0x8BDBA3: lea     eax, [esp+50h+var_44]
0x8BDBA7: push    eax
0x8BDBA8: push    edi
0x8BDBA9: mov     ecx, esi
0x8BDBAB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8BDBB0: lea     ecx, [esp+50h+var_40]
0x8BDBB4: call    sub_8BD940
0x8BDBB9: lea     ecx, [esp+50h+var_40]
0x8BDBBD: push    ecx
0x8BDBBE: mov     ecx, ebx
0x8BDBC0: call    sub_8BD720
0x8BDBC5: pop     edi
0x8BDBC6: pop     esi
0x8BDBC7: pop     ebx
0x8BDBC8: mov     esp, ebp
0x8BDBCA: pop     ebp
0x8BDBCB: retn    4
