0x52ACC0: push    0FFFFFFFFh
0x52ACC2: push    offset SEH_52AD40
0x52ACC7: mov     eax, large fs:0
0x52ACCD: push    eax
0x52ACCE: push    ecx
0x52ACCF: push    ebx
0x52ACD0: push    esi
0x52ACD1: push    edi
0x52ACD2: mov     eax, ds:0B30AACh
0x52ACD7: xor     eax, esp
0x52ACD9: push    eax
0x52ACDA: lea     eax, [esp+20h+var_C]
0x52ACDE: mov     large fs:0, eax
0x52ACE4: mov     esi, ecx
0x52ACE6: mov     [esp+20h+var_10], esi
0x52ACEA: lea     ecx, [esi+4]; this
0x52ACED: call    ??0DNameNode@@IAE@XZ; DNameNode::DNameNode(void)
0x52ACF2: lea     edi, [esi+0Ch]
0x52ACF5: xor     ebx, ebx
0x52ACF7: mov     ecx, edi
0x52ACF9: mov     [esp+20h+var_4], ebx
0x52ACFD: call    Script_Constructor
0x52AD02: push    ebx; a2
0x52AD03: mov     ecx, edi; this
0x52AD05: mov     byte ptr [esp+24h+var_4], 1
0x52AD0A: mov     [esi], bl
0x52AD0C: call    TESForm_SetIsLinked
0x52AD11: mov     ecx, edi; this
0x52AD13: call    TESForm_MakeTemporary
0x52AD18: mov     byte ptr [esi+34h], 1
0x52AD1C: mov     [esi+5Ch], ebx
0x52AD1F: mov     [esi+64h], ebx
0x52AD22: mov     [esi+68h], ebx
0x52AD25: mov     [esi+60h], bl
0x52AD28: mov     [esi+61h], bl
0x52AD2B: mov     eax, esi
0x52AD2D: mov     ecx, [esp+20h+var_C]
0x52AD31: mov     large fs:0, ecx
0x52AD38: pop     ecx
0x52AD39: pop     edi
0x52AD3A: pop     esi
0x52AD3B: pop     ebx
0x52AD3C: add     esp, 10h
0x52AD3F: retn
