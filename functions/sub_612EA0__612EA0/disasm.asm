0x612EA0: sub     esp, 8
0x612EA3: fld     [esp+8+arg_0]
0x612EA7: push    esi
0x612EA8: push    edi
0x612EA9: fld     st
0x612EAB: mov     esi, ecx
0x612EAD: call    Double_To_SInt32
0x612EB2: mov     edi, eax
0x612EB4: mov     [esp+10h+arg_0], edi
0x612EB8: fild    [esp+10h+arg_0]
0x612EBC: fstp    [esp+10h+arg_0]
0x612EC0: fld     [esp+10h+arg_0]
0x612EC4: fld     st
0x612EC6: fsubp   st(2), st
0x612EC8: fxch    st(1)
0x612ECA: fcomp   qword ptr ds:0A2FC68h
0x612ED0: fnstsw  ax
0x612ED2: test    ah, 1
0x612ED5: jz      short loc_612EDD
0x612ED7: fsub    qword ptr ds:0A2F928h
0x612EDD: mov     ecx, [esi+24h]
0x612EE0: fstp    [esp+10h+arg_0]
0x612EE4: fld     [esp+10h+arg_0]
0x612EE8: fnstcw  word ptr [esp+10h+arg_0]
0x612EEC: movzx   eax, word ptr [esp+10h+arg_0]
0x612EF1: or      eax, 0C00h
0x612EF6: mov     dword ptr [esp+10h+var_8], eax
0x612EFA: fldcw   word ptr [esp+10h+var_8]
0x612EFE: fistp   [esp+10h+var_8]
0x612F02: mov     eax, dword ptr [esp+10h+var_8]
0x612F06: push    eax
0x612F07: fldcw   word ptr [esp+14h+arg_0]
0x612F0B: call    TESPackage_LocationData_SetRadius
0x612F10: mov     ecx, [esi+28h]
0x612F13: push    edi
0x612F14: call    TESAIForm_SetServiceFlags
0x612F19: pop     edi
0x612F1A: pop     esi
0x612F1B: add     esp, 8
0x612F1E: retn    4
