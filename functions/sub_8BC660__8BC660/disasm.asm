0x8BC660: sub     esp, 14h
0x8BC663: mov     eax, [esp+14h+arg_4]
0x8BC667: mov     edx, [esp+14h+arg_10]
0x8BC66B: push    esi
0x8BC66C: mov     esi, [esp+18h+arg_0]
0x8BC670: push    edx
0x8BC671: mov     [esp+1Ch+var_8], eax
0x8BC675: mov     eax, [esp+1Ch+arg_C]
0x8BC679: lea     ecx, [esp+1Ch+var_C]
0x8BC67D: push    eax
0x8BC67E: mov     [esp+20h+var_14], ecx
0x8BC682: mov     ecx, [esp+20h+arg_8]
0x8BC686: push    ecx
0x8BC687: push    offset unk_BA8320
0x8BC68C: lea     edx, [esp+28h+var_14]
0x8BC690: push    edx
0x8BC691: push    esi
0x8BC692: mov     [esp+30h+var_C], offset aSnapshotsave; "SnapshotSave"
0x8BC69A: mov     [esp+30h+var_4], offset unk_BA82D8
0x8BC6A2: mov     [esp+30h+var_10], 1
0x8BC6AA: call    sub_8BC540
0x8BC6AF: add     esp, 18h
0x8BC6B2: mov     eax, esi
0x8BC6B4: pop     esi
0x8BC6B5: add     esp, 14h
0x8BC6B8: retn
