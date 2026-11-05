VERILATE := verilator
VERILATE_FLAGS := --binary --trace-fst

paddle_logic: src/paddle_logic.sv tb/tb_paddle_logic.sv
	$(VERILATE) $(VERILATE_FLAGS) $^
	cp obj_dir/Vpaddle_logic .

clean:
	rm -rf obj_dir
	rm -rf waveform.fst
	rm -f Vpaddle_logic