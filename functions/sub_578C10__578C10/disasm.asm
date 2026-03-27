0x578C10: push    0FFFFFFFFh
0x578C12: push    offset SEH_578C10
0x578C17: mov     eax, large fs:0
0x578C1D: push    eax
0x578C1E: sub     esp, 8
0x578C21: push    ebx
0x578C22: push    ebp
0x578C23: push    esi
0x578C24: push    edi
0x578C25: mov     eax, ds:0B30AACh
0x578C2A: xor     eax, esp
0x578C2C: push    eax
0x578C2D: lea     eax, [esp+28h+var_C]
0x578C31: mov     large fs:0, eax
0x578C37: mov     esi, ecx
0x578C39: mov     ebp, [esp+28h+a2]
0x578C3D: xor     edi, edi
0x578C3F: push    edi; a3
0x578C40: push    ebp; a2
0x578C41: lea     ecx, [esp+30h+var_14]; this
0x578C45: mov     [esp+30h+var_4], edi
0x578C49: mov     [esp+30h+var_14.m_data], edi
0x578C4D: mov     [esp+30h+var_14.m_dataLen], di
0x578C52: mov     [esp+30h+var_14.m_bufLen], di
0x578C57: call    BSStringT_Set
0x578C5C: mov     ebx, [esp+28h+arg_8]
0x578C60: push    ebx
0x578C61: lea     eax, [esp+2Ch+var_14]
0x578C65: push    eax
0x578C66: mov     ecx, esi
0x578C68: mov     byte ptr [esp+30h+var_4], 1
0x578C6D: call    sub_578960
0x578C72: mov     esi, eax
0x578C74: cmp     esi, edi
0x578C76: jz      short loc_578C95
0x578C78: mov     ecx, [esp+28h+arg_C]
0x578C7C: push    ebx
0x578C7D: push    ecx
0x578C7E: mov     ecx, esi
0x578C80: call    ??0?$NiTPointerListBase@V?$DFALL@PAVNiTriShape@@@@PAVNiTriShape@@@@QAE@XZ; NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *>::NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *>(void)
0x578C85: mov     ecx, esi
0x578C87: call    sub_577AA0
0x578C8C: push    esi
0x578C8D: call    FormHeapFree
0x578C92: add     esp, 4
0x578C95: mov     edx, [esp+28h+var_14.m_data]
0x578C99: push    edx
0x578C9A: call    FormHeapFree
0x578C9F: push    ebp
0x578CA0: call    FormHeapFree
0x578CA5: add     esp, 8
0x578CA8: mov     al, 1
0x578CAA: mov     ecx, [esp+28h+var_C]
0x578CAE: mov     large fs:0, ecx
0x578CB5: pop     ecx
0x578CB6: pop     edi
0x578CB7: pop     esi
0x578CB8: pop     ebp
0x578CB9: pop     ebx
0x578CBA: add     esp, 14h
0x578CBD: retn    10h
