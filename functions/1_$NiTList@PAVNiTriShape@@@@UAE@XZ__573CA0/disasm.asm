0x573CA0: push    0FFFFFFFFh
0x573CA2: push    offset ??1?$NiTList@PAVNiTriShape@@@@UAE@XZ_SEH
0x573CA7: mov     eax, large fs:0
0x573CAD: push    eax
0x573CAE: push    ecx
0x573CAF: push    esi
0x573CB0: mov     eax, ds:0B30AACh
0x573CB5: xor     eax, esp
0x573CB7: push    eax
0x573CB8: lea     eax, [esp+18h+var_C]
0x573CBC: mov     large fs:0, eax
0x573CC2: mov     esi, ecx
0x573CC4: mov     [esp+18h+var_10], esi
0x573CC8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVNiTriShape@@@@PAVNiTriShape@@@@6B@; const NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *>::`vftable'
0x573CCE: mov     [esp+18h+var_4], 0
0x573CD6: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x573CDB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVNiTriShape@@@@PAVNiTriShape@@@@6B@; const NiTListBase<DFALL<NiTriShape *>,NiTriShape *>::`vftable'
0x573CE1: mov     ecx, [esp+18h+var_C]
0x573CE5: mov     large fs:0, ecx
0x573CEC: pop     ecx
0x573CED: pop     esi
0x573CEE: add     esp, 10h
0x573CF1: retn
0x573850: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@PAVNiTriShape@@@@PAVNiTriShape@@@@6B@; const NiTListBase<DFALL<NiTriShape *>,NiTriShape *>::`vftable'
0x573856: retn
0x9BE0F0: mov     ecx, [ebp-10h]
0x9BE0F3: jmp     loc_573850
0x9BE0F8: mov     edx, [esp+arg_4]
0x9BE0FC: lea     eax, [edx-8]
0x9BE0FF: mov     ecx, [edx-0Ch]
0x9BE102: xor     ecx, eax
0x9BE104: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BE109: mov     eax, offset stru_AE78E8
0x9BE10E: jmp     ___CxxFrameHandler3
