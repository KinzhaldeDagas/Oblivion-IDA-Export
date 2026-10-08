0x6A4642: mov     ecx, [esi+20h]; RunFinishEvent chunk: resolve target through caster vfunc +4, call ScriptEffect_RunFinishEvent(script,target,eventList), then destroy the event list.
0x6A4645: mov     edx, [esi+3Ch]
0x6A4648: mov     eax, [ecx]
0x6A464A: push    edx
0x6A464B: mov     edx, [eax+4]
0x6A464E: call    edx
0x6A4650: mov     ecx, [esi+38h]
0x6A4653: push    eax
0x6A4654: call    ScriptEffect_RunFinishEvent; Wrapper for ScriptEffectFinish: calls ScriptRunner_RunEvent with start=0, finish=1, elapsedSeconds=0.0.
