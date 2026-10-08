0x6A4620: push    esi; ScriptEffect Remove vfunc: normally runs ScriptEffectFinish and destroys the event list; save/load flags can suppress Finish and only destroy the list.
0x6A4621: mov     esi, ecx
0x6A4623: cmp     dword ptr [esi+38h], 0
0x6A4627: push    edi
0x6A4628: jz      short ScriptEffect_Remove___DestroyEventList; DestroyEventList chunk: destruct and FormHeapFree the ScriptEventList at +0x3C, then null the field.
0x6A462A: mov     eax, ds:0B33B00h
0x6A462F: mov     eax, [eax+18h]
0x6A4632: mov     ecx, eax
0x6A4634: shr     ecx, 0Bh
0x6A4637: test    cl, 1
0x6A463A: jz      short ScriptEffect_Remove___RunFinishEvent; RunFinishEvent chunk: resolve target through caster vfunc +4, call ScriptEffect_RunFinishEvent(script,target,eventList), then destroy the event list.
0x6A463C: shr     eax, 1
0x6A463E: test    al, 1
0x6A4640: jz      short ScriptEffect_Remove___DestroyEventList; DestroyEventList chunk: destruct and FormHeapFree the ScriptEventList at +0x3C, then null the field.
