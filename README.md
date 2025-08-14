# 🧠 Fertility Diagnosis on Microcontroller (TinyML)

> **Summary (≤350 chars):** TinyML project deploying a fertility classification model on **ESP32** with **TensorFlow Lite** + **EloquentTinyML**. Processes 9 health/lifestyle features entirely **on‑device** for low‑power, private, real‑time inference—prioritizing successful edge deployment over peak accuracy.

---

## ✨ Highlights

* ⚡ **On‑device inference** (no cloud, low latency)
* 🔒 **Privacy‑preserving**: data never leaves the ESP32
* 🔋 **Ultra‑low power**: ideal for wearables & remote setups
* 🧩 **End‑to‑end pipeline**: TensorFlow → TFLite → ESP32 (EloquentTinyML)

---

## 🚀 Quick Start

```bash
# Clone
git clone https://github.com/Gmohith7/Fertility-Diagnosis-on-Microcontroller-Using-TF-Lite-and-EloquentTinyML-.git
cd Fertility-Diagnosis-on-Microcontroller-Using-TF-Lite-and-EloquentTinyML-

# Python env (training/export)
pip install -r requirements.txt  # if provided
```

1. **Train / Convert** in Python (TensorFlow → `.tflite`).
2. **Embed model** in firmware (C array header) using EloquentTinyML.
3. **Flash ESP32** from Arduino IDE or PlatformIO.

---

## 🧱 Model & Data

* **Task**: Binary fertility classification from 9 factors (season, age, childhood diseases, accidents, surgeries, high fevers, alcohol, smoking, sitting hours).
* **Format**: TensorFlow model → **TensorFlow Lite** for microcontrollers.

---

## 🛠️ Stack

* **Modeling**: TensorFlow → TFLite (quantization recommended)
* **Firmware**: ESP32 + **EloquentTinyML**
* **IDE**: Arduino IDE / PlatformIO


---

### 🙌 Acknowledgments

Inspired by community TinyML resources and EloquentTinyML examples.

---

**Tip:** Keep models tiny (quantize!) to fit ESP32 RAM/Flash and keep inference snappy.
